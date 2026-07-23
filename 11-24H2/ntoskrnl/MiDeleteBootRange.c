/*
 * XREFs of MiDeleteBootRange @ 0x14066A308
 * Callers:
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140C5097C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiDriverPdeOkToDelete @ 0x14066A5B0 (MiDriverPdeOkToDelete.c)
 *     MiUnmapReturnCharges @ 0x140A8BE9C (MiUnmapReturnCharges.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 valid; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  _OWORD v20[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  ULONG_PTR v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h]

  v23 = a2;
  v2 = a2;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  v4 = (((a1 - 8 + 8 * a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiDecommitPages(a1, v6, 0, 0LL, 0LL, 0, 0LL, (__int64)v20);
  v10 = *(_QWORD *)&v20[0];
  if ( *(_QWORD *)&v20[0] != v2 )
    v10 = v2;
  *(_QWORD *)&v20[0] = v10;
  valid = 0LL;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v7, v8, v9);
  if ( v12 <= v4 )
  {
    while ( 1 )
    {
      if ( (v12 & 0xFFF) != 0 )
      {
        if ( valid )
          goto LABEL_10;
      }
      else if ( valid )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      }
      valid = MiLockLowestValidPageTableEx((__int64)AnyMultiplexedVm, v12, &v22, 0);
      if ( valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_10:
        if ( (MI_READ_PTE_LOCK_FREE(v12) & 1) != 0 )
        {
          MiLockNestedPageTable((__int64)AnyMultiplexedVm, v12);
          v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v15 = (*(_DWORD *)(v14 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v14) : *(_QWORD *)(v14 + 16) >> 16;
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
          if ( (v15 & 0x3FF) == 0 )
          {
            if ( (unsigned int)MiDriverPdeOkToDelete(v12) )
            {
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
              MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
              MiReturnSystemVa(
                (__int64)(v12 << 25) >> 16 << 25 >> 16,
                ((__int64)(v12 << 25) >> 16 << 25 >> 16) + 0x200000);
              valid = 0LL;
              v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v16, v17, v18);
            }
          }
        }
        v12 += 8LL;
        goto LABEL_18;
      }
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      valid = 0LL;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_18:
      if ( v12 > v4 )
      {
        v2 = v23;
        if ( valid )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
  result = MiUnmapReturnCharges(&MiSystemPartition, v20);
  _InterlockedAdd64(&qword_140E37718, -v2);
  return result;
}
