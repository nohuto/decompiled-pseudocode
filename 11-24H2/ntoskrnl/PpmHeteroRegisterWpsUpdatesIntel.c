/*
 * XREFs of PpmHeteroRegisterWpsUpdatesIntel @ 0x140765660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmHeteroRegisterWpsUpdatesIntel()
{
  __int64 result; // rax

  result = 0LL;
  if ( !PpmHeteroHgsEnabled || PpmHeteroHgsVendor != 2 )
    return 3221225485LL;
  if ( PpmHeteroCheckWpsTableUpdated || PpmHeteroAcknowledgeWpsUpdate )
    return 3221225680LL;
  PpmHeteroWpsUpdateInterfaceHandle = 0LL;
  PpmHeteroCheckWpsTableUpdated = (__int64)PpmHeteroCheckWpsTableUpdatedIntel;
  PpmHeteroAcknowledgeWpsUpdate = (__int64)PpmHeteroAcknowledgeWpsUpdateIntel;
  return result;
}
