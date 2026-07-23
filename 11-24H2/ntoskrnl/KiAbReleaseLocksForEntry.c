/*
 * XREFs of KiAbReleaseLocksForEntry @ 0x140407AB8
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall KiAbReleaseLocksForEntry(__int64 a1, __int64 a2)
{
  char v2; // al
  char v4; // al
  volatile LONG *v5; // rcx
  char v6; // al

  v2 = *(_BYTE *)(a1 + 48);
  if ( (v2 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 48) = v2 & 0xFB;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)(a1 + 16), a2);
  }
  v4 = *(_BYTE *)(a1 + 48);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(volatile LONG **)(a1 + 8);
    v6 = v4 & 0xFE;
    *(_BYTE *)(a1 + 48) = v6;
    if ( (v6 & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    *(_BYTE *)(a1 + 48) &= ~2u;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
}
