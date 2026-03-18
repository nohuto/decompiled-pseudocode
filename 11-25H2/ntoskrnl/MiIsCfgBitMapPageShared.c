/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x14047031C
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140905BC4 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  char v6; // r15
  __int64 v7; // rsi
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 ProtoPteAddress; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  unsigned __int64 *v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = MiLockWorkingSetShared((__int64)p_Blink);
  if ( v4 != MiGetNextPageTable(v4, v4, v6, 0, &v16) )
  {
    v10 = 3;
    goto LABEL_6;
  }
  v7 = (v4 >> 9) & 0x7FFFFFFFF8LL;
  v8 = *(_QWORD *)v4;
  v9 = v7 - 0x98000000000LL;
  if ( !v8 )
  {
    v10 = 2;
    goto LABEL_4;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8, &v16);
  v10 = 1;
  if ( (v8 & 1) != 0 )
  {
    v13 = 48 * (((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v13 + 40) >= 0 )
    {
LABEL_9:
      v10 = 0;
      goto LABEL_4;
    }
    v15 = (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) == ProtoPteAddress;
    goto LABEL_17;
  }
  if ( (v8 & 0x400) == 0 )
    goto LABEL_9;
  if ( !MiIsPrototypePteVadLookup(v8) )
  {
    if ( qword_140E2D940 )
    {
      if ( (v8 & 0x10) != 0 )
        v8 &= ~0x10uLL;
      else
        v8 &= ~qword_140E2D940;
    }
    v15 = v14 == v8 >> 16;
LABEL_17:
    if ( !v15 )
      goto LABEL_9;
  }
LABEL_4:
  if ( v9 )
    MiUnlockPageTable((__int64)p_Blink, v9);
LABEL_6:
  MiUnlockWorkingSetShared((__int64)p_Blink, v6);
  return v10;
}
