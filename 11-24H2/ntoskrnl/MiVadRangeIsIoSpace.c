/*
 * XREFs of MiVadRangeIsIoSpace @ 0x1404C49B8
 * Callers:
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 */

unsigned __int64 __fastcall MiVadRangeIsIoSpace(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int8 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx

  v4 = a2;
  v5 = a3;
  v6 = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v11 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3, a4);
  if ( v7 > v8 )
    goto LABEL_16;
  do
  {
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal((__int64)p_Blink, v9);
    }
    v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v7, 0, v11, 0);
LABEL_6:
    v12 = (*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL;
    if ( v12 > qword_140E2DD20 || ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      break;
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0)
       || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v9)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal((__int64)p_Blink, v9);
      MiUnlockWorkingSetShared((__int64)p_Blink, v11);
      v9 = 0LL;
      MiLockWorkingSetShared((__int64)p_Blink, v13, v14, v15);
    }
  }
  while ( v7 <= v8 );
  v5 = a3;
  v4 = a2;
  if ( v9 )
    MiUnlockPageTableInternal((__int64)p_Blink, v9);
LABEL_16:
  MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  v16 = (__int64)(v7 << 25) >> 16;
  if ( v16 >= v4 )
  {
    v6 = v16 - v4;
    if ( v16 - v4 > v5 )
      return v5;
  }
  return v6;
}
