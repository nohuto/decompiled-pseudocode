/*
 * XREFs of ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BFA34
 * Callers:
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1402BFCD4 (-DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140352330 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFC70 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFCA8 (-EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        union MONITOR_AND_LINK_HDR_CAPS *a3,
        enum MonitorAndLinkHDRIncapableReason *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  int v11; // edi
  int v12; // eax
  int v13; // r11d
  unsigned int v14; // r9d
  int v15; // r8d
  unsigned int v16; // r9d
  bool v17; // zf
  DXGK_MONITORLINKINFO_CAPABILITIES v18; // r9d
  __int16 v19; // r10
  BOOL v20; // ebp
  int v21; // ecx
  int v22; // r10d
  unsigned int v23; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) < 2500 )
  {
    v18.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)a2->Capabilities;
    v11 = 4;
    v19 = (__int16)v18.0;
    v20 = (*(_BYTE *)&v18.0 & 4) != 0 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
    v16 = (v20 | *(_DWORD *)a3 & 0xFFFFFFFE) ^ ((v20 | *(_BYTE *)a3 & 0xFE) ^ *((_BYTE *)&v18.0 + 1)) & 2;
    v17 = (v19 & 0x400) == 0;
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 40LL))(v9, &v23);
  v10 = v23;
  v11 = 4;
  if ( (v23 & 4) == 0 && (v23 & 8) == 0 || (*(_BYTE *)&a2->Capabilities.0 & 4) == 0 )
    goto LABEL_4;
  if ( (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 88LL))(*(_QWORD *)this))
    && !DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    v10 = v23;
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
  v10 = v23;
  v12 = 1;
LABEL_5:
  v13 = 2;
  v14 = v12 | *(_DWORD *)a3 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v14;
  if ( !v12 && a4 )
  {
    *(_DWORD *)a4 = 0;
    v21 = 0;
    if ( (v10 & 4) == 0 && (v10 & 8) == 0 )
    {
      *(_DWORD *)a4 = 2;
      v21 = 2;
    }
    if ( (*(_BYTE *)&a2->Capabilities.0 & 4) == 0 )
    {
      v21 |= 4u;
      *(_DWORD *)a4 = v21;
    }
    if ( !*((_BYTE *)this + 120) )
    {
      v21 |= 8u;
      *(_DWORD *)a4 = v21;
    }
    if ( !*((_BYTE *)this + 119) && !*((_BYTE *)this + 118) )
      *(_DWORD *)a4 = v21 | 0x10;
    if ( !DxgMonitor::MonitorColorState::EdidColorDepthMoreThanSDR(this) )
    {
      v22 |= 0x20u;
      *(_DWORD *)a4 = v22;
    }
    if ( !v22 )
      *(_DWORD *)a4 = 1;
  }
  v15 = (v10 >> 2) & 1;
  if ( !v15 || (a2->Capabilities.Value & 0x200) == 0 )
    v13 = 0;
  v16 = v13 | v14 & 0xFFFFFFFD;
  if ( !v15 )
    goto LABEL_12;
  v17 = (a2->Capabilities.Value & 0x400) == 0;
LABEL_11:
  if ( v17 || !*((_BYTE *)this + 412) )
LABEL_12:
    v11 = 0;
  *(_DWORD *)a3 = v11 | v16 & 0xFFFFFFFB;
}
