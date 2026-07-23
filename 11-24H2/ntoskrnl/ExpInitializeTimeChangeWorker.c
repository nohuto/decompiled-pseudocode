/*
 * XREFs of ExpInitializeTimeChangeWorker @ 0x140A7A504
 * Callers:
 *     ExpInitializeTimeZoneInformation @ 0x140A7A008 (ExpInitializeTimeZoneInformation.c)
 * Callees:
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 */

void __fastcall ExpInitializeTimeChangeWorker(__int64 a1, KDEFERRED_ROUTINE *a2, void *a3, __int64 a4, __int64 a5)
{
  KeInitializeDpc((PRKDPC)a1, a2, a3);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(a1 + 152) = a5;
  KeInitializeTimer((PKTIMER)(a1 + 64));
}
