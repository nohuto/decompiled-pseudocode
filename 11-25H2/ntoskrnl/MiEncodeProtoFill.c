/*
 * XREFs of MiEncodeProtoFill @ 0x1402CDF70
 * Callers:
 *     MiInitializePrototypePtes @ 0x14093A344 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int8 v8; // r15
  unsigned __int8 v10; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = v4 + 8 * (a2 >> 9);
  v10 = MiLockWorkingSetShared((__int64)&unk_140E37D80);
  v8 = v10;
  if ( v4 >= v7 )
    goto LABEL_9;
  do
  {
    if ( !v6 )
      goto LABEL_11;
    if ( (v4 & 0xFFF) == 0 )
    {
      MiUnlockPageTable((__int64)&unk_140E37D80, v6);
LABEL_11:
      v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(&unk_140E37D80, v6);
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
  v8 = v10;
  if ( v6 )
    MiUnlockPageTable((__int64)&unk_140E37D80, v6);
LABEL_9:
  MiUnlockWorkingSetShared((__int64)&unk_140E37D80, v8);
  return v5;
}
