/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800B8790 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015BA4 (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18007A3B8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x180088440 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009AE74 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x1800A6E08 (--1CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A8188 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800B62A0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800B6698 (--1CContactManager@@QEAA@XZ.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B87E0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B8830 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800B8880 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800BABC0 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800DCC88 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800F50A4 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, const struct std::nothrow_t *a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  CBaseObject **v5; // rsi
  void *v6; // rdi
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rdi
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rdi
  void *v11; // rdi
  CWindowList *v12; // rcx
  void *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  void *v15; // rcx
  CBaseObject *v16; // rcx
  CIconicBitmapRegistry *v17; // rcx
  CImmersiveIconicBitmapRegistry *v18; // rcx
  CCompositor *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *lpMem; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDesktopManager::`vftable';
  v3 = *((unsigned int *)this + 138);
  if ( (_DWORD)v3 )
  {
    lpMem = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 528, a2, &lpMem);
    v4 = lpMem;
    if ( lpMem )
    {
      v5 = (CBaseObject **)lpMem;
      do
      {
        CBaseObject::Release(*v5++);
        --v3;
      }
      while ( v3 );
      DefaultHeap::Free(v4);
    }
  }
  v6 = (void *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    CAnimationClockCoordinator::~CAnimationClockCoordinator(*((CAnimationClockCoordinator **)this + 21));
    CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v7);
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 23));
    CDisplayBlackCurtainAnimatedVisual::operator delete(v8, v9);
    *((_QWORD *)this + 23) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 24);
  if ( v10 )
  {
    CTransitionVisualController::~CTransitionVisualController(*((CTransitionVisualController **)this + 24));
    DefaultHeap::Free(v10);
    *((_QWORD *)this + 24) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 20);
  if ( v11 )
  {
    CContactManager::~CContactManager(*((void ***)this + 20));
    DefaultHeap::Free(v11);
    *((_QWORD *)this + 20) = 0LL;
  }
  v12 = (CWindowList *)*((_QWORD *)this + 53);
  if ( v12 )
  {
    CWindowList::`vector deleting destructor'(v12, 1u);
    *((_QWORD *)this + 53) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 58);
  if ( v13 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v13, a2);
    *((_QWORD *)this + 58) = 0LL;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    v15 = (void *)*((_QWORD *)this + 59);
    if ( v15 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v15, v14);
      *((_QWORD *)this + 59) = 0LL;
    }
  }
  CDesktopManager::ReleaseDCompResources(this);
  v16 = (CBaseObject *)*((_QWORD *)this + 57);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CIconicBitmapRegistry *)*((_QWORD *)this + 28);
  if ( v17 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v17, 1u);
    *((_QWORD *)this + 28) = 0LL;
  }
  v18 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 29);
  if ( v18 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v18, 1u);
    *((_QWORD *)this + 29) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v19 = (CCompositor *)*((_QWORD *)this + 6);
  if ( v19 )
  {
    CCompositor::Shutdown(v19);
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  }
  v20 = *((_QWORD *)this + 30);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)this + 30) = 0LL;
  }
  v21 = *((_QWORD *)this + 31);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    *((_QWORD *)this + 31) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 163);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 157);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 66);
  std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>((_QWORD *)this + 27);
  std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>((_QWORD *)this + 26);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 13);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  CBaseObject::~CBaseObject(this);
}
