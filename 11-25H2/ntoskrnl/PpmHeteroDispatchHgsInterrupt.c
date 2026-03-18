/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1404B5880
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
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
