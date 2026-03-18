/*
 * XREFs of MiVadRangeIsIoSpace @ 0x1404CB75C
 * Callers:
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiVadRangeIsIoSpace(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx

  v3 = a2;
  v4 = a3;
  v5 = 0LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v10 = MiLockWorkingSetShared((__int64)p_Blink);
  if ( v6 > v7 )
    goto LABEL_16;
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTable((__int64)p_Blink, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0, v10, 0);
LABEL_6:
    v11 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
    if ( v11 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      break;
    v6 += 8LL;
    if ( (v6 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0)
       || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTable((__int64)p_Blink, v8);
      MiUnlockWorkingSetShared((__int64)p_Blink, v10);
      v8 = 0LL;
      MiLockWorkingSetShared((__int64)p_Blink);
    }
  }
  while ( v6 <= v7 );
  v4 = a3;
  v3 = a2;
  if ( v8 )
    MiUnlockPageTable((__int64)p_Blink, v8);
LABEL_16:
  MiUnlockWorkingSetShared((__int64)p_Blink, v10);
  v12 = (__int64)(v6 << 25) >> 16;
  if ( v12 >= v3 )
  {
    v5 = v12 - v3;
    if ( v12 - v3 > v4 )
      return v4;
  }
  return v5;
}
