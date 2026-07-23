/*
 * XREFs of MiEncodeProtoFill @ 0x140269858
 * Callers:
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbp
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // r15
  unsigned __int8 v12; // [rsp+50h] [rbp+8h]

  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2 >> 9;
  v7 = 0LL;
  v8 = 0LL;
  v9 = v5 + 8 * v6;
  v12 = MiLockWorkingSetShared((__int64)&unk_140E38100, v6, a3, a4);
  v10 = v12;
  if ( v5 >= v9 )
    goto LABEL_9;
  do
  {
    if ( !v8 )
      goto LABEL_10;
    if ( (v5 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(&unk_140E38100, v8);
LABEL_10:
      v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E38100, v8);
    }
    if ( (*(_QWORD *)v5 & 1) != 0 )
      break;
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)v5) )
      break;
    *(_QWORD *)v5 = a3;
    v7 += 512LL;
    v5 += 8LL;
  }
  while ( v5 < v9 );
  v10 = v12;
  if ( v8 )
    MiUnlockPageTableInternal(&unk_140E38100, v8);
LABEL_9:
  MiUnlockWorkingSetShared((__int64)&unk_140E38100, v10);
  return v7;
}
