/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180017DA0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18004B008 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800EB6C4 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 * Callees:
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180034C10 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18005AC48 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C7E88 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // r8
  _BYTE *v5; // rcx
  char v6; // bl
  const struct CWindowData *v8; // r8
  CLivePreview *v9; // rcx
  __int64 v10; // rax

  v1 = *((_QWORD *)this + 36);
  if ( !v1 )
    return 0;
  v3 = *(_BYTE *)(v1 + 736);
  if ( (v3 & 0x10) != 0 )
    return 0;
  if ( (v3 & 0x20) != 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 72LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9)) )
    return 0;
  v4 = *((_QWORD *)this + 36);
  v5 = (_BYTE *)(v4 + 740);
  if ( (*(_DWORD *)(v4 + 116) & 0xC00000) != 0xC00000 && (*v5 & 0x40) == 0 )
    return 0;
  if ( *(char *)(v4 + 120) < 0 )
    return 0;
  v6 = 1;
  if ( (*(_BYTE *)(v4 + 736) & 1) == 0 )
    return 0;
  if ( (*v5 & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v4 + 408) )
    return 0;
  if ( !CDesktopManager::IsWindowAnimationEnabled() )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 303) )
  {
    v10 = *((_QWORD *)this + 40);
    if ( !v10 || *(_BYTE *)(v10 + 72) )
      return 0;
  }
  v9 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
  if ( *((_BYTE *)v9 + 240) )
  {
    if ( v8 && CLivePreview::_IsInLivePreview(v9, v8) )
      return 0;
  }
  if ( !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
    return 0;
  return v6;
}
