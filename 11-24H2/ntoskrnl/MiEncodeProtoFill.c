/*
 * XREFs of MiEncodeProtoFill @ 0x1402C6470
 * Callers:
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  char v9; // r15
  char v11; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = v4 + 8 * (a2 >> 9);
  v11 = MiLockWorkingSetShared(&unk_140E37FC0);
  v9 = v11;
  if ( v4 >= v7 )
    goto LABEL_9;
  do
  {
    if ( !v6 )
      goto LABEL_10;
    if ( (v4 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(&unk_140E37FC0, v6);
LABEL_10:
      v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37FC0, v6);
    }
    if ( (*(_QWORD *)v4 & 1) != 0 )
      break;
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)v4) )
      break;
    *(_QWORD *)v4 = a3;
    v5 += 512LL;
    v4 += 8LL;
  }
  while ( v4 < v7 );
  v9 = v11;
  if ( v6 )
    MiUnlockPageTableInternal(&unk_140E37FC0, v6);
LABEL_9:
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared(&unk_140E37FC0, v8);
  return v5;
}
