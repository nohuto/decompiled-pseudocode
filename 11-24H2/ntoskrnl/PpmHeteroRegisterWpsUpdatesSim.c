/*
 * XREFs of PpmHeteroRegisterWpsUpdatesSim @ 0x140765600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmHeteroRegisterWpsUpdatesSim()
{
  __int64 result; // rax

  result = 0LL;
  if ( !PpmHeteroHgsEnabled || PpmHeteroHgsVendor != 15 )
    return 3221225485LL;
  if ( PpmHeteroCheckWpsTableUpdated || PpmHeteroAcknowledgeWpsUpdate )
    return 3221225680LL;
  PpmHeteroWpsUpdateInterfaceHandle = 0LL;
  PpmHeteroCheckWpsTableUpdated = (__int64)PpmHeteroCheckWpsTableUpdatedSim;
  PpmHeteroAcknowledgeWpsUpdate = (__int64)tlgDefineProvider_annotation__TlgMiTraceHandleProv;
  return result;
}
