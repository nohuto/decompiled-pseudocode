/*
 * XREFs of ?GetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14003F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 160) + 20LL), 0, 0);
  }
  else
  {
    v2 = -2147467261;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount", 0x40Bu, -2147467261);
  }
  return v2;
}
