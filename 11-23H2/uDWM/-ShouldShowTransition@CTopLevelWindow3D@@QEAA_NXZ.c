/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18004DFF4
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18004F364 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FDFD8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180100DA8 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1801044A0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18004FC3C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C85EC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  char v6; // bl
  CLivePreview *v8; // rcx
  __int64 v9; // rax

  v1 = *((_QWORD *)this + 42);
  if ( !v1 )
    return 0;
  v3 = *(_BYTE *)(v1 + 672);
  if ( (v3 & 0x10) != 0 )
    return 0;
  if ( (v3 & 0x20) != 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 72LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9)) )
    return 0;
  v4 = *((_QWORD *)this + 42);
  v5 = (_BYTE *)(v4 + 676);
  if ( (*(_DWORD *)(v4 + 116) & 0xC00000) != 0xC00000 && (*v5 & 0x40) == 0 )
    return 0;
  if ( *(char *)(v4 + 120) < 0 )
    return 0;
  v6 = 1;
  if ( (*(_BYTE *)(v4 + 672) & 1) == 0 )
    return 0;
  if ( (*v5 & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v4 + 408) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 171) )
  {
    v9 = *((_QWORD *)this + 46);
    if ( !v9 || *(_BYTE *)(v9 + 72) )
      return 0;
  }
  v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
  if ( *((_BYTE *)v8 + 288) )
  {
    if ( v4 && CLivePreview::_IsInLivePreview(v8, (const struct CWindowData *)v4) )
      return 0;
  }
  if ( !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
    return 0;
  return v6;
}
