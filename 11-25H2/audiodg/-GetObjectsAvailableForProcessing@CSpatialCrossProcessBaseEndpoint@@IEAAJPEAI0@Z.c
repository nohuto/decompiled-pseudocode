/*
 * XREFs of ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x1400319A4
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140031630 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x140031A5C (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140031B04 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Index; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // eax

  *a3 = 0;
  *a2 = 0;
  Index = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(this);
  if ( Index < 0 || (Index = CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex(this, a2), Index < 0) )
  {
    if ( Index == -2005139358 )
      return (unsigned int)Index;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing",
      0x32Au,
      Index);
    return (unsigned int)Index;
  }
  v7 = *((_DWORD *)this + 72) + *((_DWORD *)this + 73);
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 4LL * *a2 + 24), 0, 0);
  if ( v8 > v7 )
  {
    Index = -2147418113;
    goto LABEL_8;
  }
  *a3 = v8;
  return (unsigned int)Index;
}
