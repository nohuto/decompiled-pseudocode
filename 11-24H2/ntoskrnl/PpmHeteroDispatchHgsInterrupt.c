/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1404B5320
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

char PpmHeteroDispatchHgsInterrupt()
{
  __int32 v0; // eax

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE) )
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE, 0LL, 0, 0LL, 0LL, 0, 0LL);
  v0 = _InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !v0 )
    LOBYTE(v0) = KeInsertQueueDpc(&PpmHeteroHgsUpdateDpc, 0LL, 0LL);
  return v0;
}
