/*
 * XREFs of MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIncreaseAvailablePages @ 0x1403BCD40 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4D30 (MiUpdatePageThresholdsDpc.c)
 *     MiUpdateAvailableEvents @ 0x140679E34 (MiUpdateAvailableEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

void __fastcall MiUpdateAvailableEventsAtDpc(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned __int64 v3; // rsi
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx

  v1 = (volatile LONG *)(a1 + 16192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16192));
  v3 = *(_QWORD *)(a1 + 18688);
  v4 = *(struct _KEVENT **)(a1 + 280);
  if ( v3 <= *(_QWORD *)(a1 + 16640) )
    KeSetEvent(v4, 0, 0);
  else
    KeResetEvent(v4);
  v5 = *(struct _KEVENT **)(a1 + 288);
  if ( v3 <= *(_QWORD *)(a1 + 16648) )
    KeResetEvent(v5);
  else
    KeSetEvent(v5, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
