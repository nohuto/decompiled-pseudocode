/*
 * XREFs of ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x1400319A4
 * Callers:
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140031804 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14008DBF8 (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14008E370 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F2A0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14008FA90 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x1400319FC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall PingPongState::CommitState(__int64 a1, __int64 a2)
{
  unsigned __int32 State; // eax
  unsigned __int32 v4; // r10d
  __int64 v5; // r11
  unsigned __int32 v6; // edx

  State = PingPongState::GetState(a1);
  if ( State != 17 )
  {
    while ( State <= 0x10 )
    {
      v6 = State;
      v4 = *(_DWORD *)(a2 + 4LL * State);
      State = _InterlockedCompareExchange(*(volatile signed __int32 **)(v5 + 136), v4, State);
      if ( v6 == State )
        goto LABEL_4;
    }
    return 16;
  }
LABEL_4:
  if ( State > 0x10 )
    return 16;
  return v4;
}
