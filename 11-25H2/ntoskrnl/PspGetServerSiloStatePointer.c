/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1404F8B40
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140769A58 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408D9BC4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1504) + 1272LL;
}
