/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x140090BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031970 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus(
        CSpatialCrossProcessClientOutputEndpoint *this,
        enum SpatialStreamStatus *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int8 IsRunning; // al
  _DWORD *v6; // r10

  v4 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( a2 )
    {
      IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16));
      *v6 = IsRunning;
      return v4;
    }
    v4 = -2147467261;
  }
  else
  {
    v4 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus", 271, v4, a4);
  return v4;
}
