/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026BA4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x14031A158 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140321514 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402E19E4 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1403087EC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        bool *a3,
        bool *a4,
        char *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        _DWORD *a8)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v13; // rax
  DXGADAPTER *v14; // rdi
  __int64 v15; // rsi
  int VideoOutputTechnology; // eax
  unsigned __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-40h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp-38h]
  char v21; // [rsp+68h] [rbp-30h]
  LONG HighPart; // [rsp+A4h] [rbp+Ch]

  HighPart = a1.HighPart;
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v18);
  v14 = v13;
  if ( v13 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v13) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9286;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!pAdapterIn->IsCoreResourceSharedOwner()",
        9286LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = v14;
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    DXGADAPTER::ReleaseReference(v14);
    if ( *((_DWORD *)v14 + 50) == 1 )
    {
      if ( a6
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v14, a2, a6, a7),
            v15 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        WdLogSingleEntry2(2LL, v14, VideoOutputTechnology);
        WdLogGlobalForLineNumber = 9311;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to find output technology type for adapter 0x%I64x with status 0x%I64x",
          (__int64)v14,
          v15,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( a8 )
          *a8 = DmmGetTargetUsage(v14, a2, 0LL);
        LODWORD(v15) = IsVirtualizationDisabledForTarget((__int64)v14, a2, a3, a4, a5);
      }
    }
    else
    {
      LODWORD(v15) = -1073741130;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    return (unsigned int)v15;
  }
  else
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    WdLogGlobalForLineNumber = 9279;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsVirtualModeDisabledForPath function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
