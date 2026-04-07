/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180032058 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18001E6D8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18001ED90 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18001F0D8 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18001F940 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x180020C8C (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180021CB4 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180025C2C (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180025C58 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18002B468 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18002D424 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002D5C4 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18002DB98 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x18002E024 (-UpdateIsLightTheme@CWindowList@@QEAAXXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x18002FEEC (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800302E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18005149C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800523C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, unsigned int *a2)
{
  unsigned int v2; // r14d
  int Theme; // edi
  char v4; // r15
  unsigned int *v5; // r12
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  HMONITOR v14; // rax
  RECT *v15; // rdi
  int v16; // eax
  int SystemMetrics; // eax
  __int64 v18; // rcx
  int v20; // eax
  CDesktopManager *v21; // rdx
  LONG v22; // ecx
  int v23; // ecx
  _DWORD v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[20]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int128 v31; // [rsp+A8h] [rbp-58h]
  __int128 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]

  v2 = *a2;
  Theme = 0;
  v4 = 0;
  v5 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    a2);
  if ( (v2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  v8 = v2;
  if ( (v2 & 0x10) != 0 && !CDesktopManager::LoadAccentColorSettings(this) )
    v8 = v2 & 0xFFFFFFEF;
  if ( (v8 & 0x20) != 0 )
  {
    v20 = CDesktopManager::ModeChange((CGraphicsDeviceManager **)this);
    Theme = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xD2Bu, 0LL);
      goto LABEL_29;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    memset_0(v27, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v9 = v34;
    v10 = v29;
    *(_OWORD *)((char *)this + 296) = v28;
    v11 = v30;
    *(_OWORD *)((char *)this + 312) = v10;
    v12 = v31;
    *(_OWORD *)((char *)this + 328) = v11;
    v13 = v32;
    *(_OWORD *)((char *)this + 344) = v12;
    *(_QWORD *)&v12 = v33;
    *(_OWORD *)((char *)this + 360) = v13;
    *((_QWORD *)this + 47) = v12;
    *((_DWORD *)this + 96) = v9;
    *((_DWORD *)this + 97) = GetSystemMetrics(76);
    *((_DWORD *)this + 98) = GetSystemMetrics(77);
    *((_DWORD *)this + 99) = GetSystemMetrics(78);
    *((_DWORD *)this + 100) = GetSystemMetrics(79);
    v14 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    v15 = (RECT *)((char *)this + 404);
    if ( GetMonitorInfoW(v14, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 404), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *v15 = mi.rcMonitor;
    }
    else
    {
      v21 = CDesktopManager::s_pDesktopManagerInstance;
      v22 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
      v15->left = v22;
      *((_DWORD *)this + 103) = *((_DWORD *)v21 + 99) + v22;
      v23 = *((_DWORD *)v21 + 98);
      *((_DWORD *)this + 102) = v23;
      *((_DWORD *)this + 104) = *((_DWORD *)v21 + 100) + v23;
    }
    v16 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x295u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Theme, 0xD4Eu, 0LL);
      goto LABEL_29;
    }
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    SystemMetrics = GetSystemMetrics(6);
    dword_18014843C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    v18 = *((_QWORD *)this + 25);
    dword_180148440 = SystemMetrics;
    dword_180148444 = SystemMetrics;
    if ( v18 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 96LL))(v18, 0LL);
  }
  if ( (v8 & 0x800) == 0 )
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_15;
LABEL_36:
    CDesktopManager::UnloadTheme(this);
    Theme = CDesktopManager::LoadTheme(this);
    if ( Theme < 0 )
      goto LABEL_29;
    v4 = 1;
    goto LABEL_15;
  }
  if ( (v8 & 4) != 0 )
    goto LABEL_36;
  CDesktopManager::InitializeHighContrast(this, v7);
LABEL_15:
  if ( (v8 & 0x400) != 0 || v4 )
  {
    CDesktopManager::SetupColorization(this);
    CWindowList::UpdateIsLightTheme(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  }
  if ( (v8 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v8 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 54));
  if ( (v8 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (v8 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (v8 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 20));
  if ( (v8 & 0x200) != 0 )
  {
    v24[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, v24, 0) )
      CDesktopManager::SetWindowAnimation(v24[1] != 0);
  }
LABEL_29:
  *v5 = v8;
  return (unsigned int)Theme;
}
