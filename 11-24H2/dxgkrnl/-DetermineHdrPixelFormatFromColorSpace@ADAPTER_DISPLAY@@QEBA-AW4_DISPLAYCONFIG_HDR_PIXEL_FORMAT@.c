/*
 * XREFs of ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x14035FBA0
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FE7C (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F900 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403D5698 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  char v7; // bl
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v8; // eax
  DxgMonitor::MonitorColorState *v9; // rcx
  int v10; // ecx
  int v12; // [rsp+50h] [rbp-59h] BYREF
  struct _DXGK_MONITORLINKINFO v13; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v15; // [rsp+80h] [rbp-29h] BYREF
  int v16; // [rsp+88h] [rbp-21h]
  const wchar_t *v17; // [rsp+90h] [rbp-19h]
  int *v18; // [rsp+98h] [rbp-11h]
  int v19; // [rsp+A0h] [rbp-9h]
  int *v20; // [rsp+A8h] [rbp-1h]
  int v21; // [rsp+B0h] [rbp+7h]
  __int64 v22; // [rsp+B8h] [rbp+Fh]
  int v23; // [rsp+C0h] [rbp+17h]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  __int128 v25; // [rsp+D0h] [rbp+27h]
  __int128 v26; // [rsp+E0h] [rbp+37h]
  int v27; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( g_OSTestSigningEnabled )
  {
    v27 = 0;
    v15 = 0LL;
    v17 = L"HighColor";
    v16 = 288;
    v18 = &v27;
    v19 = 0x4000000;
    v20 = &v27;
    v21 = 4;
    v22 = 0LL;
    v23 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    if ( (int)RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Dwm", &v15, 0LL, 0LL) >= 0
      && (unsigned int)(v27 - 1) <= 4 )
    {
      if ( v27 != 1 )
      {
        switch ( v27 )
        {
          case 2:
            return 1;
          case 3:
            return 2;
          case 5:
            return 3;
          default:
            return v3;
        }
      }
      return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
    }
  }
  switch ( a2 )
  {
    case 12:
      if ( a3 )
      {
        v7 = 0;
        v12 = 0;
        MONITOR_MGR::AcquireMonitorShared(v14, a3);
        if ( !v14[0] )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3636;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
          return v3;
        }
        if ( (*(_BYTE *)(v14[0] + 177LL) & 2) != 0 )
        {
          v8.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v14[0] + 340LL);
          v9 = *(DxgMonitor::MonitorColorState **)(v14[0] + 224LL);
          *(_QWORD *)&v13.UsageHints.0 = *(_QWORD *)(v14[0] + 332LL);
          v13.DitheringSupport = v8;
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            v9,
            &v13,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v12,
            0LL);
          v7 = v12;
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
        if ( (v7 & 1) != 0 )
          return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
      }
      break;
    case 30:
      return 3;
    case 33:
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 444LL);
      if ( (v10 & 0x200) == 0 && (v10 & 8) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3149;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"this->GetAdapter()->IsXBoxOneDevice() || this->GetAdapter()->IsSoftGPU()",
          3149LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      break;
  }
  return v3;
}
