/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1404F8AA0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140779808 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x14085A824 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1504) + 1272LL;
}
