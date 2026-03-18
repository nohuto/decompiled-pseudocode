/*
 * XREFs of ??8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x140273A88
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgMonitor::MonitorColorState::CachedLuminanceData::operator==(__int64 a1, __int64 a2)
{
  return *(_BYTE *)a1 == *(_BYTE *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12);
}
