/*
 * XREFs of MiUpdateAvailableEventsAtDpc @ 0x1402D19B0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x1403F66D0 (MiIncreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4650 (MiUpdatePageThresholdsDpc.c)
 *     MiUpdateAvailableEvents @ 0x1406856C4 (MiUpdateAvailableEvents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
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
