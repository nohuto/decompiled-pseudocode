/*
 * XREFs of ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14004C4F4
 * Callers:
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140031804 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
        int *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v5; // r8d
  int v6; // eax

  if ( a4 >= 0 )
  {
    *a1 = 0;
    a1[1] = 1;
    return;
  }
  v5 = -2005139358;
  if ( a4 != -2005139358 )
  {
    v5 = a4;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 0x299u, v5);
    return;
  }
  v6 = *a1 + 1;
  *a1 = v6;
  if ( v6 == a1[1] )
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 0x299u, -2005139358);
    a1[1] *= 2;
    return;
  }
  if ( !(_BYTE)v6 )
    goto LABEL_9;
}
