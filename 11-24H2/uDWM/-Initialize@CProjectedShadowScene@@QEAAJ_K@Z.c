/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180047D64
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008B318 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800449F8 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180047FD0 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800481D8 (-GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Com.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800482B0 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800CAD04 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  struct CGlobalLightSet *GlobalLightSetForDesktop; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ProjectedShadowReceiverVisual; // eax
  const struct std::nothrow_t *v8; // rdx
  CProjectedShadowScene::CProjectedShadowSceneInstance *v9; // rax
  int SharedLightByType; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  const struct std::nothrow_t *v13; // rdx
  CProjectedShadowScene::CProjectedShadowSceneInstance *v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+20h] [rbp-10h] BYREF
  CProjectedShadowScene::CProjectedShadowSceneInstance *v21; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v23; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+68h] [rbp+38h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               a2);
  if ( GlobalLightSetForDesktop )
  {
    ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
    v5 = ProjectedShadowReceiverVisual;
    if ( ProjectedShadowReceiverVisual < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)ProjectedShadowReceiverVisual,
        (int)v20);
      goto LABEL_30;
    }
    v9 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)operator new[](0x70uLL, v8);
    v21 = v9;
    if ( v9 )
      v9 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v9);
    *((_QWORD *)this + 3) = v9;
    if ( !v9 )
    {
      v5 = -2147024882;
      v6 = 40LL;
      goto LABEL_9;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    SharedLightByType = CGlobalLightSet::GetSharedLightByType(GlobalLightSetForDesktop, 3LL, &v23);
    v5 = SharedLightByType;
    if ( SharedLightByType >= 0 )
    {
      SharedLightByType = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(
                            *((_QWORD *)this + 3),
                            v23,
                            0LL);
      v5 = SharedLightByType;
      if ( SharedLightByType >= 0 )
      {
        v14 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)operator new[](0x70uLL, v13);
        v21 = v14;
        if ( v14 )
          v14 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v14);
        *((_QWORD *)this + 4) = v14;
        if ( v14 )
        {
          v24 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
          v15 = CGlobalLightSet::GetSharedLightByType(GlobalLightSetForDesktop, 4LL, &v24);
          v5 = v15;
          if ( v15 >= 0 )
          {
            v16 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v24, 1LL);
            v5 = v16;
            if ( v16 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x33,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
                (const char *)(unsigned int)v16,
                (int)v20);
              v17 = v24;
              if ( v24 )
              {
                v24 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              }
              v18 = v23;
              if ( v23 )
              {
                v23 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
              }
              goto LABEL_28;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
            v5 = 0;
LABEL_30:
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
            return v5;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
            (const char *)(unsigned int)v15,
            (int)v20);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_14:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
          goto LABEL_30;
        }
        v5 = -2147024882;
        v12 = 2147942414LL;
        v11 = 47LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)v12,
          (int)v20);
        goto LABEL_14;
      }
      v11 = 44LL;
    }
    else
    {
      v11 = 43LL;
    }
    v12 = (unsigned int)SharedLightByType;
    goto LABEL_13;
  }
  v5 = -2147023728;
  v6 = 35LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v5,
    (int)v20);
LABEL_28:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
