/*
 * XREFs of MiMakeSystemLeavesNonZero @ 0x1404D1540
 * Callers:
 *     MiComputePxeWalkAction @ 0x14023FE60 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

char __fastcall MiMakeSystemLeavesNonZero(int *a1, ULONG_PTR a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 DemandZeroPte; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v15; // [rsp+60h] [rbp+18h]

  v3 = 0;
  v4 = a3;
  if ( (*a1 & 4) != 0 )
    MiLockNestedPageTable(*((_QWORD *)a1 + 4), a2);
  v7 = *(_QWORD *)&a1[2 * v4 + 30];
  v8 = *(_QWORD *)&a1[2 * v4 + 22];
  if ( v7 > (v8 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
    v7 = (*(_QWORD *)&a1[2 * v4 + 22] & 0xFFFFFFFFFFFFF000uLL) + 4088;
  DemandZeroPte = MiMakeDemandZeroPte(16);
  if ( v8 <= v7 )
  {
    do
    {
      v15 = v3;
      v10 = v8;
      v11 = MI_READ_PTE_LOCK_FREE(v8);
      if ( !v11 )
        *(_QWORD *)v8 = DemandZeroPte;
      ++v3;
      if ( v11 )
        v3 = v15;
      v8 += 8LL;
    }
    while ( v8 <= v7 );
    if ( v3 && (_DWORD)v4 != 4 )
      MiIncreaseUsedPtes(v12, ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v3, 2LL);
  }
  v13 = *a1;
  if ( (*a1 & 4) != 0 )
    LOBYTE(v13) = MiUnlockPageTableInternal(*((_QWORD *)a1 + 4), a2);
  return v13;
}
