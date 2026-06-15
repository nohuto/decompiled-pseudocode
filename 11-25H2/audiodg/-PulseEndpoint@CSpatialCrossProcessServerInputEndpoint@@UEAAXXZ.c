/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x140031390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140031CFC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140031D3C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(CSpatialCrossProcessServerInputEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint *v1; // rbx

  if ( *((_BYTE *)this - 1344) )
  {
    v1 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1440);
    if ( `PingPongState::GetEmptyBufferCount'::`2'::emptyBufferCount_[(unsigned int)PingPongState::GetState((char *)this - 864)] )
      *((_BYTE *)v1 + 1344) = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(v1);
  }
  else
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 0x18Eu, -2005139437);
  }
}
