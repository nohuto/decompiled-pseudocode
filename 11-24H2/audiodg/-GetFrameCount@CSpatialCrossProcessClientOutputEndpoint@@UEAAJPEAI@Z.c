/*
 * XREFs of ?GetFrameCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14008FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetFrameCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int32 v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v4 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v4 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetFrameCount", 294, v4, a4);
    return v4;
  }
  if ( !a2 )
  {
    v4 = -2147467261;
    goto LABEL_5;
  }
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 44LL), 0, 0);
  v7 = *((_DWORD *)this + 67);
  v8 = v7;
  if ( v6 < v7 )
    v8 = v6;
  if ( !v8 )
    v8 = v7;
  *a2 = v8;
  return v4;
}
