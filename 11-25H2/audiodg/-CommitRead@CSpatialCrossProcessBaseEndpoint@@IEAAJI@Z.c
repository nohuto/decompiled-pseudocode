/*
 * XREFs of ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x140031BE8
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140031400 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140031CFC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitRead(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  volatile signed __int32 **v4; // rdi
  unsigned __int32 State; // eax
  unsigned __int32 v6; // r11d
  bool i; // zf
  unsigned __int32 v8; // edx

  v2 = 0;
  if ( a2 > 1 )
  {
    v2 = -2147024809;
LABEL_12:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitRead", 0x3C0u, v2);
    return v2;
  }
  v4 = (volatile signed __int32 **)((char *)this + 576);
  State = PingPongState::GetState((char *)this + 576);
  for ( i = State == 17; !i; i = v8 == State )
  {
    if ( State > 0x10 )
      goto LABEL_9;
    v8 = State;
    v6 = `PingPongState::CommitRead'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v4[17], v6, State);
  }
  if ( State <= 0x10 )
    goto LABEL_7;
LABEL_9:
  v6 = 16;
LABEL_7:
  if ( *((_DWORD *)v4 + v6) == 3 )
  {
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((char *)this + 784, 0LL);
    v2 = -2005139387;
    goto LABEL_12;
  }
  return v2;
}
