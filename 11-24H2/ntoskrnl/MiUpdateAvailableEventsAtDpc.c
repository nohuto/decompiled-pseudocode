/*
 * XREFs of MiUpdateAvailableEventsAtDpc @ 0x140261834
 * Callers:
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDecreaseAvailablePages @ 0x140261500 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x140263490 (MiIncreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404AEE90 (MiUpdatePageThresholdsDpc.c)
 *     MiUpdateAvailableEvents @ 0x1406867F4 (MiUpdateAvailableEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
