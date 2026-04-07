/*
 * XREFs of ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CED94
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E4F38 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18002B8CC (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureHoverPointerSourceAnimationStopped@CGlobalLightSet@@QEAAJXZ @ 0x1800C1028 (-EnsureHoverPointerSourceAnimationStopped@CGlobalLightSet@@QEAAJXZ.c)
 *     ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x1800CE870 (-HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ.c)
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x1800CEEEC (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF1A8 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::RemoveCaster(CProjectedShadowScene *this, struct CTopLevelWindow *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  CGlobalLightSet *GlobalLightSetForDesktop; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(
              *((CProjectedShadowScene::CProjectedShadowSceneInstance **)this + 3),
              a2);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(
                *((CProjectedShadowScene::CProjectedShadowSceneInstance **)this + 4),
                a2);
    v5 = updated;
    if ( updated >= 0 )
    {
      *((_BYTE *)a2 + 249) &= ~0x10u;
      if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*((CProjectedShadowScene::CProjectedShadowSceneInstance **)this
                                                                            + 3))
        || CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*((CProjectedShadowScene::CProjectedShadowSceneInstance **)this
                                                                            + 4)) )
      {
        goto LABEL_13;
      }
      GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                   *((_QWORD *)this + 2));
      if ( !GlobalLightSetForDesktop )
      {
        v5 = -2147023728;
        v7 = 2147943568LL;
        v6 = 87LL;
        goto LABEL_6;
      }
      updated = CGlobalLightSet::EnsureHoverPointerSourceAnimationStopped(GlobalLightSetForDesktop);
      v5 = updated;
      if ( updated >= 0 )
      {
LABEL_13:
        updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(this);
        v5 = updated;
        if ( updated >= 0 )
        {
          updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 6)
                                                                    + 32LL)
                                                      + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 6)
                                                                         + 32LL));
          v5 = updated;
          if ( updated >= 0 )
          {
            v5 = 0;
            goto LABEL_18;
          }
          v6 = 93LL;
        }
        else
        {
          v6 = 92LL;
        }
      }
      else
      {
        v6 = 89LL;
      }
    }
    else
    {
      v6 = 81LL;
    }
  }
  else
  {
    v6 = 80LL;
  }
  v7 = (unsigned int)updated;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v7);
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
