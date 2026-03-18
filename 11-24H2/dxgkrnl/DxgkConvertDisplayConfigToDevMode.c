/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x140361700
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ConvertDisplayConfigToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_ROTATION@@W41@@Z @ 0x140059FF4 (-ConvertDisplayConfigToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1403615D0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x140361F34 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(__int64 a1, struct _devicemodeW *a2, __int64 a3)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v5; // r15d
  unsigned int v6; // r14d
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  char v12; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // r10d
  int *v14; // rcx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+60h] [rbp-10h]
  struct _D3DDDI_RATIONAL v21; // [rsp+90h] [rbp+20h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2178);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2178);
  if ( (*(_QWORD *)a1 & 0x100001030387LL) == 0x100001030387LL )
  {
    v5 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 196) == -2 && *(_DWORD *)(a1 + 200) == -2 )
    {
      v6 = 64;
    }
    else
    {
      v21 = *(struct _D3DDDI_RATIONAL *)(a1 + 196);
      v6 = DmmMapVSyncFromRationalToInteger(&v21, v5, 0LL);
    }
    v7 = *(_DWORD *)(a1 + 112);
    v21.Numerator = 0;
    v8 = DxgkConvertDisplayConfigCScalingToDdiScaling(
           v7,
           (struct _LUID *)(a1 + 16),
           (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v21);
    if ( v8 >= 0 )
    {
      v13 = (unsigned int)ConvertDisplayConfigToDmmRotation(*(_DWORD *)(a1 + 104));
      v14 = (int *)(a1 + 128);
      if ( v12 )
        v15 = *(_DWORD *)(a1 + 124);
      else
        v15 = *v14;
      if ( !v12 )
        v14 = (int *)(a1 + 124);
      v8 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             0x20uLL,
             *v14,
             v15,
             v6,
             v5,
             v13,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v21.Numerator,
             a2);
      if ( v8 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = *(_DWORD *)(a1 + 116);
        a2->dmPosition.y = *(_DWORD *)(a1 + 120);
      }
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v18);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1775;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"An invalid path was passed to DxgkConvertDisplayConfigToDevMode, missing required flags.",
      1775LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
    return 3221225485LL;
  }
}
