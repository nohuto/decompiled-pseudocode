/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1404FB1C0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140779708 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408E8FFC (PspBeginServerSiloShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1504) + 1272LL;
}
