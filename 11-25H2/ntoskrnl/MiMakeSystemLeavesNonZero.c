/*
 * XREFs of MiMakeSystemLeavesNonZero @ 0x1404D9074
 * Callers:
 *     MiComputePxeWalkAction @ 0x1402B48B0 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 */

char __fastcall MiMakeSystemLeavesNonZero(int *a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 DemandZeroPte; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v16; // [rsp+60h] [rbp+18h]

  v4 = 0;
  v5 = (int)a3;
  if ( (*a1 & 4) != 0 )
    MiLockNestedPageTable(*((_QWORD *)a1 + 4), a2, a3, a4);
  v8 = *(_QWORD *)&a1[2 * v5 + 30];
  v9 = *(_QWORD *)&a1[2 * v5 + 22];
  if ( v8 > (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
    v8 = (*(_QWORD *)&a1[2 * v5 + 22] & 0xFFFFFFFFFFFFF000uLL) + 4088;
  DemandZeroPte = MiMakeDemandZeroPte(16);
  if ( v9 <= v8 )
  {
    do
    {
      v16 = v4;
      v11 = v9;
      v12 = MI_READ_PTE_LOCK_FREE(v9);
      if ( !v12 )
        *(_QWORD *)v9 = DemandZeroPte;
      ++v4;
      if ( v12 )
        v4 = v16;
      v9 += 8LL;
    }
    while ( v9 <= v8 );
    if ( v4 && (_DWORD)v5 != 4 )
      MiIncreaseUsedPtes(v13, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4, 2);
  }
  v14 = *a1;
  if ( (*a1 & 4) != 0 )
    LOBYTE(v14) = MiUnlockPageTable(*((_QWORD *)a1 + 4), a2);
  return v14;
}
