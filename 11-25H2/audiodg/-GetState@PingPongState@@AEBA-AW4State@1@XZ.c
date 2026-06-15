/*
 * XREFs of ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140031CFC
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x140031390 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140031B04 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x140031BE8 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x140031CA4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PingPongState::GetState(__int64 a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 136);
  result = 16LL;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(v1, 0, 0);
    if ( (unsigned int)result > 0x10 )
    {
      _InterlockedExchange(*(volatile __int32 **)(a1 + 136), 16);
      return 16LL;
    }
  }
  return result;
}
