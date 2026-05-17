/*
 * XREFs of RtlControlStackTraceDataBase @ 0x1800E5934
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E599C (RtlpInitializeStackTraceDatabase.c)
 */

__int64 __fastcall RtlControlStackTraceDataBase(unsigned int a1, int a2, _QWORD *a3)
{
  if ( a1 >= 3 )
    return 3221225711LL;
  if ( a1 )
    return 3221225474LL;
  if ( a2 != 24 )
    return 3221225712LL;
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*a3, a3[1], a3[2]);
  return 3221225713LL;
}
