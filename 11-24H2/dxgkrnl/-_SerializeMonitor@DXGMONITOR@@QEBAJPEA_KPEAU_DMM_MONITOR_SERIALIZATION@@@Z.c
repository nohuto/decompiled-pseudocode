/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F928 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA?AU_DXGKARG_GETDPADDRESS@@XZ @ 0x140064178 (-GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA-AU_DXGKARG_GETDPADDRESS@@XZ.c)
 *     ?IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ @ 0x140064970 (-IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E038 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140091558 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ @ 0x14018BD54 (-_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ.c)
 *     ?SerializeToBuffer@MonitorDescriptorState@DxgMonitor@@QEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZATION@@I@Z @ 0x140279924 (-SerializeToBuffer@MonitorDescriptorState@DxgMonitor@@QEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALI.c)
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14027A100 (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14027A148 (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION@@I@Z @ 0x14027A33C (-SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESE.c)
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x14027A404 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
 *     ?GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14027B2D8 (-GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERN.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028F030 (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140314B08 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140315D70 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F900 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF300 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_1403AF300.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  int v6; // r13d
  unsigned int ModesSerializationSizeInBytes; // eax
  DxgMonitor::MonitorModes *v8; // rcx
  __int64 v9; // r14
  __int64 FrequencyRangeSerializationSizeInBytes; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // dx
  bool IsAddressValid; // al
  __int16 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  char v25; // cl
  char v26; // bl
  int v27; // r12d
  __int64 v28; // rax
  unsigned int v29; // edx
  char v30; // r15
  int v31; // r14d
  __int64 v32; // rcx
  int CurrentWireFormatAndColorSpace; // eax
  bool IsHdrAllowedOnTarget; // al
  __int64 v35; // rcx
  char v36; // r8
  char v37; // dl
  bool v38; // zf
  DxgMonitor::MonitorColorState *v39; // rbx
  int v40; // edx
  char v41; // al
  bool v42; // cl
  unsigned int v43; // r8d
  __int64 v44; // rbx
  __int64 result; // rax
  int v46; // [rsp+30h] [rbp-49h] BYREF
  int v47; // [rsp+34h] [rbp-45h] BYREF
  int v48; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-3Dh] BYREF
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v50; // [rsp+40h] [rbp-39h] BYREF
  int v51; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-31h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v53; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DXGK_MONITORLINKINFO v54; // [rsp+50h] [rbp-29h] BYREF
  __int64 v55; // [rsp+60h] [rbp-19h]
  __int64 v56; // [rsp+68h] [rbp-11h]
  _BYTE v57[13]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v58; // [rsp+7Dh] [rbp+4h]
  int v59; // [rsp+85h] [rbp+Ch]
  __int16 v60; // [rsp+89h] [rbp+10h]
  char v61; // [rsp+8Bh] [rbp+12h]
  bool v62; // [rsp+E0h] [rbp+67h] BYREF
  bool v63; // [rsp+E8h] [rbp+6Fh]
  bool v64; // [rsp+F0h] [rbp+77h] BYREF
  bool v65; // [rsp+F8h] [rbp+7Fh] BYREF

  v6 = 1;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3248;
  }
  ModesSerializationSizeInBytes = DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(*((DxgMonitor::MonitorModes **)this
                                                                                             + 29));
  v8 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 29);
  v9 = ModesSerializationSizeInBytes;
  v55 = ModesSerializationSizeInBytes;
  FrequencyRangeSerializationSizeInBytes = DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(v8);
  v11 = *((_QWORD *)this + 27);
  v56 = FrequencyRangeSerializationSizeInBytes;
  v12 = *(_QWORD *)(v11 + 128);
  if ( v12 && (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12)) != 0 )
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  else
    v14 = 0;
  v52 = v14;
  v15 = v9 + FrequencyRangeSerializationSizeInBytes + v14 + 88LL;
  if ( a3 && v15 <= *a2 )
  {
    *(_DWORD *)a3 = v15;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 45);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 81);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 70) != 1;
    *((_BYTE *)a3 + 13) = *(_BYTE *)(*((_QWORD *)this + 29) + 116LL) != 0;
    v16 = *((_WORD *)a3 + 7) & 0xFFFE | DXGMONITOR::_SupportSyncLockIdentical(this);
    *((_WORD *)a3 + 7) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(*((_DWORD *)this + 84) >> 1)) & 2;
    *((_WORD *)a3 + 7) = v17;
    v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(2 * *((_WORD *)this + 168))) & 4;
    *((_WORD *)a3 + 7) = v18;
    *((_WORD *)a3 + 7) = v18 & 0xFFEF | (*(_BYTE *)(*((_QWORD *)this + 33) + 8LL) != 0 ? 0x10 : 0);
    IsAddressValid = DxgMonitor::MonitorDisplayPortState::IsAddressValid(*((DxgMonitor::MonitorDisplayPortState **)this
                                                                         + 34));
    *((_WORD *)a3 + 7) = v20 & 0xFFF7 | (8 * IsAddressValid);
    *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)this + 29) + 112LL);
    v21 = *(_QWORD *)(*((_QWORD *)this + 25) + 8LL);
    if ( v21 )
      v22 = *(_DWORD *)(*(_QWORD *)(v21 + 64) + 284LL);
    else
      v22 = 0;
    *((_DWORD *)a3 + 5) = v22;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 70);
    if ( DxgMonitor::MonitorDisplayPortState::IsAddressValid(*((DxgMonitor::MonitorDisplayPortState **)this + 34)) )
    {
      DxgMonitor::MonitorDisplayPortState::GetAddress(v23, (__int64)v57);
      v24 = v59;
      v25 = v57[12];
      *(_QWORD *)((char *)a3 + 41) = v58;
      *(_DWORD *)((char *)a3 + 49) = v24;
      *(_WORD *)((char *)a3 + 53) = v60;
      *((_BYTE *)a3 + 55) = v61;
      *((_BYTE *)a3 + 40) = v25;
    }
    if ( !(unsigned int)Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_34;
    v46 = 0;
    v63 = 0;
    v62 = 0;
    v26 = 0;
    v48 = 0;
    *(_QWORD *)&v54.UsageHints.0 = 0LL;
    v54.DitheringSupport.Value = 0;
    v47 = 0;
    if ( (int)DXGMONITOR::_GetLinkInfo(this, &v54) < 0 )
    {
      v27 = 1;
      v46 = 1;
      v47 = 1;
    }
    else
    {
      DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
        *((DxgMonitor::MonitorColorState **)this + 28),
        &v54,
        (union MONITOR_AND_LINK_HDR_CAPS *)&v48,
        (enum MonitorAndLinkHDRIncapableReason *)&v46);
      DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
        *((DxgMonitor::MonitorColorState **)this + 28),
        &v54,
        &v62,
        (enum MonitorAndLinkWCGIncapableReason *)&v47);
      v26 = v48;
      v27 = v46;
      v6 = v47;
      v63 = v62;
    }
    v28 = *((_QWORD *)this + 21);
    v29 = *((_DWORD *)this + 45);
    v30 = 0;
    v53.Value = 0;
    v31 = 0;
    v50 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v32 = *(_QWORD *)(v28 + 24);
    v49 = 0;
    if ( DmmGetSourceConnectedToTargetInClientVidPn(*(void *const *)(v32 + 16), v29, &v49) >= 0 )
    {
      CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                         *(void **)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL),
                                         v49,
                                         *((_DWORD *)this + 45),
                                         &v53,
                                         &v50);
      if ( CurrentWireFormatAndColorSpace < 0 )
      {
        WdLogSingleEntry2(3LL, *((unsigned int *)this + 45), CurrentWireFormatAndColorSpace);
        WdLogGlobalForLineNumber = 3350;
      }
      else
      {
        if ( v50 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
          || v50 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS )
        {
          v30 = 1;
        }
        LOBYTE(v31) = v50 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG;
      }
    }
    IsHdrAllowedOnTarget = DmmIsHdrAllowedOnTarget(
                             *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL),
                             *((_DWORD *)this + 45));
    v35 = *((_QWORD *)this + 28);
    v36 = *(_BYTE *)(v35 + 457);
    v37 = *(_BYTE *)(v35 + 456);
    if ( v30 )
      v31 = 2;
    *((_DWORD *)a3 + 17) = v27;
    *((_DWORD *)a3 + 14) = v31;
    *((_BYTE *)a3 + 60) = !IsHdrAllowedOnTarget;
    *((_DWORD *)a3 + 18) = v6;
    *((_BYTE *)a3 + 61) = v26 & 1;
    v51 = 0;
    v64 = 0;
    v38 = !v63;
    *((_BYTE *)a3 + 62) = v37 != 0;
    v65 = 0;
    *((_BYTE *)a3 + 63) = !v38;
    *((_BYTE *)a3 + 64) = v36 != 0;
    if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = (DxgMonitor::MonitorColorState *)*((_QWORD *)this + 28);
      DxgMonitor::MonitorColorState::GetExternalBrightnessPolicy(
        v39,
        &v64,
        &v65,
        (enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *)&v51);
      v40 = *((_DWORD *)v39 + 131);
      if ( v64 || v65 )
      {
        v41 = 1;
LABEL_33:
        FrequencyRangeSerializationSizeInBytes = v56;
        *((_BYTE *)a3 + 76) = v41;
        v9 = v55;
        *((_BYTE *)a3 + 77) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL)
                                                                            + 16LL)
                                                                + 216LL)
                                                    + 64LL)
                                        + 3128LL) != 0LL;
        v42 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 2448LL) & 0x10) != 0;
        *((_DWORD *)a3 + 20) = v51;
        *((_BYTE *)a3 + 78) = v42;
        *((_DWORD *)a3 + 21) = v40;
LABEL_34:
        DxgMonitor::MonitorModes::SerializeModesToBuffer(
          *((DxgMonitor::MonitorModes **)this + 29),
          (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + 88),
          v9);
        *((_DWORD *)a3 + 6) = 88;
        DxgMonitor::MonitorModes::SerializeFrequencyRangesToBuffer(
          *((DxgMonitor::MonitorModes **)this + 29),
          (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + v9 + 88),
          FrequencyRangeSerializationSizeInBytes);
        v43 = v52;
        *((_DWORD *)a3 + 7) = v9 + 88;
        v44 = FrequencyRangeSerializationSizeInBytes + v9 + 88;
        DxgMonitor::MonitorDescriptorState::SerializeToBuffer(
          *((DxgMonitor::MonitorDescriptorState **)this + 27),
          (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + v44),
          v43);
        result = 0LL;
        *((_DWORD *)a3 + 8) = v44;
        return result;
      }
    }
    else
    {
      v40 = 2;
    }
    v41 = 0;
    goto LABEL_33;
  }
  *a2 = v15;
  return 3221225507LL;
}
