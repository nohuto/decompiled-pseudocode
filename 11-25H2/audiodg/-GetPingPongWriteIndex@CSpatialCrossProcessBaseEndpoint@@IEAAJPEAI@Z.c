/*
 * XREFs of ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14008E8F0
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14008E850 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x140031CA4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  char *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r8

  v2 = (char *)this + 576;
  v5 = 0;
  v6 = *((int *)this
       + (unsigned int)PingPongState::CommitState(
                         (__int64)this + 576,
                         (__int64)&`PingPongState::LockForWrite'::`2'::nextState)
       + 161);
  if ( (_DWORD)v6 == 3 )
  {
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((__int64)this + 784, 0LL);
    v5 = -2005139387;
    PingPongState::CommitState((__int64)v2, (__int64)&`PingPongState::Reset'::`2'::nextState);
  }
  else
  {
    v7 = *((_QWORD *)this + 163);
    if ( (_DWORD)v6 != 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 163) + 4 * v6 + 48) = *(_DWORD *)(v7 + 44);
      *a2 = v6;
      return v5;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 72));
    v5 = -2005139359;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex", 623, v5, v6);
  return v5;
}
