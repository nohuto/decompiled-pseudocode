/*
 * XREFs of ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14008E010
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14008FA90 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14008FE20 (-GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int32 v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v4 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v4 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket", 496, v4, a4);
    return v4;
  }
  if ( !a2 )
  {
    v4 = -2147467261;
    goto LABEL_5;
  }
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 44LL), 0, 0);
  v7 = *((_DWORD *)this + 71);
  v8 = v7;
  if ( v6 < v7 )
    v8 = v6;
  if ( !v8 )
    v8 = v7;
  *a2 = v8;
  return v4;
}
