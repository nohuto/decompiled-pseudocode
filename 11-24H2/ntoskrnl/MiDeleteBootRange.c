/*
 * XREFs of MiDeleteBootRange @ 0x140669130
 * Callers:
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140C4E7EC (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiDriverPdeOkToDelete @ 0x1406693D8 (MiDriverPdeOkToDelete.c)
 *     MiUnmapReturnCharges @ 0x140A8F804 (MiUnmapReturnCharges.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int64 valid; // rdi
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 result; // rax
  _OWORD v14[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  ULONG_PTR v16; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+10h]

  v17 = a2;
  v2 = a2;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v4 = (((a1 - 8 + 8 * a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiDecommitPages(a1, v6, 0, 0LL, 0LL, 0, 0LL, (__int64)v14);
  v7 = *(_QWORD *)&v14[0];
  if ( *(_QWORD *)&v14[0] != v2 )
    v7 = v2;
  *(_QWORD *)&v14[0] = v7;
  valid = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( v9 <= v4 )
  {
    while ( 1 )
    {
      if ( (v9 & 0xFFF) != 0 )
      {
        if ( valid )
          goto LABEL_10;
      }
      else if ( valid )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      }
      valid = MiLockLowestValidPageTableEx((__int64)AnyMultiplexedVm, v9, &v16, 0);
      if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_10:
        if ( (MI_READ_PTE_LOCK_FREE(v9) & 1) != 0 )
        {
          MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
          v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v12 = (*(_DWORD *)(v11 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v11) : *(_QWORD *)(v11 + 16) >> 16;
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
          if ( (v12 & 0x3FF) == 0 )
          {
            if ( (unsigned int)MiDriverPdeOkToDelete(v9) )
            {
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
              MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
              MiReturnSystemVa(
                (__int64)(v9 << 25) >> 16 << 25 >> 16,
                ((__int64)(v9 << 25) >> 16 << 25 >> 16) + 0x200000,
                11);
              valid = 0LL;
              v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
            }
          }
        }
        v9 += 8LL;
        goto LABEL_18;
      }
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_18:
      if ( v9 > v4 )
      {
        v2 = v17;
        if ( valid )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  result = MiUnmapReturnCharges(&MiSystemPartition, v14);
  _InterlockedAdd64(&qword_140E375D8, -v2);
  return result;
}
