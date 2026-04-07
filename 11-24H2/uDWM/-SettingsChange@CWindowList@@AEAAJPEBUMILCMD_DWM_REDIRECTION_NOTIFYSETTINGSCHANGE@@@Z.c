/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001E984 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180046CCC (-DisplayModeChanged@CGlobalLightSet@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18005502C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?DisplayModeChanged@CMagnifierControl@@QEAAXXZ @ 0x180080CF0 (-DisplayModeChanged@CMagnifierControl@@QEAAXXZ.c)
 *     ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x180099828 (-DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180099C54 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r15d
  unsigned int v6; // esi
  __int64 v7; // rcx
  CImmersiveIconicBitmapRegistry *v8; // r13
  struct _RTL_GENERIC_TABLE *v9; // r12
  HWND v10; // r14
  HWND i; // rbx
  CTopLevelWindow *v12; // rcx
  bool v13; // r8
  CWindowIconic *v14; // rcx
  CProjectedShadowScene *v15; // rcx
  CGlobalLightSet *v16; // rcx
  CMagnifierControl *v17; // rcx
  char *v18; // rax
  _QWORD *v19; // rdi
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  PVOID RestartKey; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = *((_DWORD *)a2 + 1);
  updated = CDesktopManager::UpdateSettings((CContactManager **)CDesktopManager::s_pDesktopManagerInstance, &v21);
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1C57u, 0LL);
  }
  else
  {
    v6 = v21 & 0x20;
    if ( (v21 & 0x20) != 0 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
        v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
      else
        v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    }
    v8 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    if ( v21 )
    {
      v9 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
      while ( 1 )
      {
        v18 = (char *)RtlEnumerateGenericTableWithoutSplaying(v9, &RestartKey);
        v19 = v18;
        if ( !v18 )
          break;
        v10 = (HWND)(v18 + 80);
        for ( i = (HWND)*((_QWORD *)v18 + 10); i != v10; i = *(HWND *)i )
        {
          v12 = (CTopLevelWindow *)*((_QWORD *)i + 55);
          if ( v12 )
            CTopLevelWindow::OnSettingsUpdated(v12, v21);
          v14 = (CWindowIconic *)*((_QWORD *)i + 61);
          if ( v14 )
            CWindowIconic::OnSettingsUpdated(v14, v21, v13);
          if ( CWindowData::IsImmersiveWindow((CWindowData *)i) && *((_DWORD *)i + 130) )
            CImmersiveIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(v8, (HWND *)i);
        }
        v15 = (CProjectedShadowScene *)v19[6];
        if ( v15 && v6 )
          CProjectedShadowScene::DisplayModeChanged(v15);
        v16 = (CGlobalLightSet *)v19[7];
        if ( v16 && v6 )
          CGlobalLightSet::DisplayModeChanged(v16);
        v17 = (CMagnifierControl *)v19[2];
        if ( v17 && v6 )
          CMagnifierControl::DisplayModeChanged(v17);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v5;
}
