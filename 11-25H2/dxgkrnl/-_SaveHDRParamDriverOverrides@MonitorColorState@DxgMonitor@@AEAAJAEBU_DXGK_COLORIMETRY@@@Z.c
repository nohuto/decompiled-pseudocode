/*
 * XREFs of ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x140275BC8
 * Callers:
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x1402682CC (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 * Callees:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_COLORIMETRY *a2)
{
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v2; // r8d
  char v4; // al
  ULONG v5; // ecx
  ULONG MaxFullFrameLuminance; // eax

  v2.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)a2->FormatBitDepths;
  *((_BYTE *)this + 52) = 1;
  *((_DWORD *)this + 14) = *(_BYTE *)&v2.0 >> 2;
  *((_BYTE *)this + 164) = 1;
  *((_DWORD *)this + 15) = (v2.Value >> 8) & 0x3F;
  *((_BYTE *)this + 312) = 1;
  *((_DWORD *)this + 16) = (v2.Value >> 14) & 0x3F;
  *((_DWORD *)this + 17) = (v2.Value >> 20) & 0x3F;
  *((_DWORD *)this + 19) = 0;
  *((_WORD *)this + 40) = 0;
  v4 = *(_BYTE *)&a2->StandardColorimetryFlags.0 & 1;
  *((_DWORD *)this + 18) = v2.Value >> 26;
  *((_BYTE *)this + 82) = v4;
  v5 = a2->StandardColorimetryFlags.Value >> 2;
  *((_BYTE *)this + 83) = (a2->StandardColorimetryFlags.Value & 2) != 0;
  *((_DWORD *)this + 42) = a2->RedPoint.cx << 10;
  *((_DWORD *)this + 43) = a2->RedPoint.cy << 10;
  *((_DWORD *)this + 44) = a2->GreenPoint.cx << 10;
  *((_DWORD *)this + 45) = a2->GreenPoint.cy << 10;
  *((_DWORD *)this + 46) = a2->BluePoint.cx << 10;
  *((_DWORD *)this + 47) = a2->BluePoint.cy << 10;
  *((_DWORD *)this + 48) = a2->WhitePoint.cx << 10;
  *((_DWORD *)this + 49) = a2->WhitePoint.cy << 10;
  *((_DWORD *)this + 80) = a2->MaxLuminance;
  *((_DWORD *)this + 79) = a2->MinLuminance;
  MaxFullFrameLuminance = a2->MaxFullFrameLuminance;
  *((_BYTE *)this + 84) = v5 & 1;
  *((_DWORD *)this + 81) = MaxFullFrameLuminance;
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
  return 0LL;
}
