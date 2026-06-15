/*
 * XREFs of ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x1400318B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031970 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetFrameCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  unsigned __int32 *v4; // r10
  unsigned int v5; // eax
  unsigned __int32 v6; // ecx
  unsigned __int32 v8; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_17:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetFrameCount", 0xD7u, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_17;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16))
    && *(_BYTE *)(v3 + 1496) )
  {
    v5 = *(_DWORD *)(v3 + 1488);
    if ( v5 >= 2 )
      v6 = 0;
    else
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1288) + 4LL * v5 + 48), 0, 0);
    if ( v6 >= *(_DWORD *)(v3 + 268) )
      v6 = *(_DWORD *)(v3 + 268);
  }
  else
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1288) + 44LL), 0, 0);
    v6 = *(_DWORD *)(v3 + 268);
    if ( v8 < v6 )
      v6 = v8;
  }
  *v4 = v6;
  if ( !v6 )
    *v4 = *(_DWORD *)(v3 + 268);
  return v2;
}
