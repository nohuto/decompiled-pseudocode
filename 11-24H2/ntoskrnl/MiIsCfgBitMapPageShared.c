/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140234458
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1408F9C78 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  char v6; // r15
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // edi
  __int64 ProtoPteAddress; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  char v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = MiLockWorkingSetShared(p_Blink);
  LOBYTE(v7) = v6;
  if ( v4 != MiGetNextPageTable(v4, v4, v7, 0, (__int64)&v18) )
  {
    v12 = 3;
    goto LABEL_6;
  }
  v9 = (v4 >> 9) & 0x7FFFFFFFF8LL;
  v10 = *(_QWORD *)v4;
  v11 = v9 - 0x98000000000LL;
  if ( !v10 )
  {
    v12 = 2;
    goto LABEL_4;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8LL, &v18);
  v12 = 1;
  if ( (v10 & 1) != 0 )
  {
    v15 = 48 * (((unsigned __int64)v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v15 + 40) >= 0 )
    {
LABEL_9:
      v12 = 0;
      goto LABEL_4;
    }
    v17 = (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) == ProtoPteAddress;
    goto LABEL_16;
  }
  if ( (v10 & 0x400) == 0 )
    goto LABEL_9;
  if ( !(unsigned int)MiIsPrototypePteVadLookup(v10) )
  {
    if ( qword_140E2DB80 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140E2DB80;
    }
    v17 = v16 == v10 >> 16;
LABEL_16:
    if ( !v17 )
      goto LABEL_9;
  }
LABEL_4:
  if ( v11 )
    MiUnlockPageTableInternal(p_Blink, v11);
LABEL_6:
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetShared(p_Blink, v8);
  return v12;
}
