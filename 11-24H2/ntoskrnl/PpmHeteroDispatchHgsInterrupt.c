/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1404AFB20
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
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
