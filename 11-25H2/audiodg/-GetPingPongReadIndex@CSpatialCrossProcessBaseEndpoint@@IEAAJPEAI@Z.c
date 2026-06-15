/*
 * XREFs of ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140031B04
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x1400319A4 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x140031CA4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140031CFC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14004C9C4 (-Log@-$LogarithmicLogger@$1-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0-HHIDPPJO@@@QEAAXPEBD.c)
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  volatile signed __int32 **v2; // rsi
  unsigned int v4; // ebx
  unsigned __int32 State; // eax
  __int64 v7; // r8
  unsigned __int32 v8; // r11d
  bool i; // zf
  unsigned __int32 v10; // edx
  __int64 v11; // rdx

  v2 = (volatile signed __int32 **)((char *)this + 576);
  v4 = 0;
  State = PingPongState::GetState((char *)this + 576);
  for ( i = State == 17; !i; i = v10 == State )
  {
    if ( State > 0x10 )
      goto LABEL_10;
    v10 = State;
    v8 = `PingPongState::LockForRead'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v2[17], v8, State);
  }
  if ( State <= 0x10 )
    goto LABEL_6;
LABEL_10:
  v8 = 16;
LABEL_6:
  v11 = *((unsigned int *)v2 + v8);
  if ( (_DWORD)v11 == 3 )
  {
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((char *)this + 784, 0LL);
    v4 = -2005139387;
    PingPongState::CommitState(v2, &`PingPongState::Reset'::`2'::nextState);
LABEL_13:
    LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
      (char *)this + 1320,
      v11,
      v7,
      v4);
    return v4;
  }
  if ( (_DWORD)v11 == 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 163) + 68LL));
    v4 = -2005139358;
    goto LABEL_13;
  }
  *a2 = v11;
  return v4;
}
