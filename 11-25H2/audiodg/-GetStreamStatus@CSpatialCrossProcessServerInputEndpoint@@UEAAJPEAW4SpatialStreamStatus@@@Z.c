/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400315C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031970 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetStreamStatus(
        CSpatialCrossProcessServerInputEndpoint *this,
        enum SpatialStreamStatus *a2)
{
  unsigned int v2; // ebx
  BOOL IsRunning; // r9d
  BOOL *v4; // r10
  __int64 v5; // r11

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetStreamStatus", 0xB6u, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_8;
  }
  IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16));
  *v4 = IsRunning;
  if ( *(_BYTE *)(v5 + 1497) )
    *v4 = IsRunning | 2;
  return v2;
}
