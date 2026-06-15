/*
 * XREFs of ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14008E178
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x140090C40 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 * Callees:
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x140031CA4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitWrite(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int32 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // eax

  v4 = 0;
  if ( a2 > 1 )
  {
    v4 = -2005139345;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitWrite", 933, v4, a4);
    return v4;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 163) + 4LL * a2 + 24), a3);
  if ( *((_DWORD *)this
       + (unsigned int)PingPongState::CommitState(
                         (__int64)this + 576,
                         (__int64)&`PingPongState::CommitWrite'::`2'::nextState)
       + 161) == 3 )
  {
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((__int64)this + 784, 0LL);
    v4 = -2005139387;
    goto LABEL_5;
  }
  if ( a3 )
    v7 = *((_DWORD *)this + 38);
  else
    v7 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)this + 163) + 32LL), v7);
  return v4;
}
