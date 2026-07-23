/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x14046208C
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14091C554 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  char v8; // r15
  __int64 v9; // rsi
  signed __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // edi
  __int64 ProtoPteAddress; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v8 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3, a4);
  if ( v6 != MiGetNextPageTable(v6, v6, v8, 0, &v18) )
  {
    v12 = 3;
    goto LABEL_6;
  }
  v9 = (v6 >> 9) & 0x7FFFFFFFF8LL;
  v10 = *(_QWORD *)v6;
  v11 = v9 - 0x98000000000LL;
  if ( !v10 )
  {
    v12 = 2;
    goto LABEL_4;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8u, &v18);
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
  if ( !MiIsPrototypePteVadLookup(v10) )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140E2DCC0;
    }
    v17 = v16 == v10 >> 16;
LABEL_16:
    if ( !v17 )
      goto LABEL_9;
  }
LABEL_4:
  if ( v11 )
    MiUnlockPageTableInternal((__int64)p_Blink, v11);
LABEL_6:
  MiUnlockWorkingSetShared((__int64)p_Blink, v8);
  return v12;
}
