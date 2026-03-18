/*
 * XREFs of _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1403F4E8C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140255CB0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_DWORD *)a1 )
    {
      result = *(_QWORD *)(a1 + 8) - 1LL;
      if ( (result & 0xFFFFFFFFFFFFFFFDuLL) == 0
        && *(_DWORD *)(a1 + 16) == 1
        && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
      {
        return McTemplateK0q_EtwWriteTransfer(
                 a1,
                 (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel,
                 a3,
                 *(_DWORD *)(a1 + 20));
      }
    }
  }
  return result;
}
