/*
 * XREFs of KiAbReleaseLocksForEntry @ 0x14041ABB4
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAbReleaseLocksForEntry(__int64 a1)
{
  char v1; // al
  char v3; // al
  volatile LONG *v4; // rcx
  char v5; // al

  v1 = *(_BYTE *)(a1 + 48);
  if ( (v1 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 48) = v1 & 0xFB;
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a1 + 16));
  }
  v3 = *(_BYTE *)(a1 + 48);
  if ( (v3 & 1) != 0 )
  {
    v4 = *(volatile LONG **)(a1 + 8);
    v5 = v3 & 0xFE;
    *(_BYTE *)(a1 + 48) = v5;
    if ( (v5 & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v4);
    *(_BYTE *)(a1 + 48) &= ~2u;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
}
