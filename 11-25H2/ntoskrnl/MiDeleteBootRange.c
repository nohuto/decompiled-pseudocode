/*
 * XREFs of MiDeleteBootRange @ 0x14065D60C
 * Callers:
 *     MmFreeBootRegistry @ 0x1407D73A4 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140C3D564 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiDriverPdeOkToDelete @ 0x14065D8B4 (MiDriverPdeOkToDelete.c)
 *     MiUnmapReturnCharges @ 0x140A8A838 (MiUnmapReturnCharges.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 result; // rax
  _OWORD v16[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  ULONG_PTR v18; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h]

  v19 = a2;
  v2 = a2;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v4 = (((a1 - 8 + 8 * a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiDecommitPages(a1, v6, 0, 0LL, 0LL, 0, 0LL, (__int64)v16);
  v7 = *(_QWORD *)&v16[0];
  if ( *(_QWORD *)&v16[0] != v2 )
    v7 = v2;
  *(_QWORD *)&v16[0] = v7;
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
        MiUnlockPageTable((__int64)AnyMultiplexedVm, valid);
      }
      valid = MiLockLowestValidPageTableEx((__int64)AnyMultiplexedVm, v9, &v18, 0);
      if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_10:
        if ( (MI_READ_PTE_LOCK_FREE(v9) & 1) != 0 )
        {
          MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9, v11, v12);
          v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v14 = (*(_DWORD *)(v13 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v13) : *(_QWORD *)(v13 + 16) >> 16;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v9);
          if ( (v14 & 0x3FF) == 0 )
          {
            if ( (unsigned int)MiDriverPdeOkToDelete(v9) )
            {
              MiUnlockPageTable((__int64)AnyMultiplexedVm, valid);
              MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
              MiReturnSystemVa(
                (__int64)(v9 << 25) >> 16 << 25 >> 16,
                ((__int64)(v9 << 25) >> 16 << 25 >> 16) + 0x200000);
              valid = 0LL;
              v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
            }
          }
        }
        v9 += 8LL;
        goto LABEL_18;
      }
      MiUnlockPageTable((__int64)AnyMultiplexedVm, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_18:
      if ( v9 > v4 )
      {
        v2 = v19;
        if ( valid )
          MiUnlockPageTable((__int64)AnyMultiplexedVm, valid);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  result = MiUnmapReturnCharges(&MiSystemPartition, v16);
  _InterlockedAdd64(&qword_140E37398, -v2);
  return result;
}
