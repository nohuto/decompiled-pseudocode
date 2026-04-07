/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800B3AD0 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18001E6D8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800200CC (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x1800AA0F8 (--1CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800ABE88 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800ACE24 (--1CCompositionEffectCache@@QEAA@XZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800AEDE0 (--1CContactManager@@QEAA@XZ.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B3B40 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B3BB0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x1800B3C20 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800B3C90 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B50B4 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800E9F38 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18010E1B8 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v3; // rbp
  CBaseObject **v4; // rsi
  CBaseObject **v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  CWindowList *v10; // rcx
  CBaseObject *v11; // rcx
  CTextCache *v12; // rcx
  CIconicBitmapRegistry *v13; // rcx
  CImmersiveIconicBitmapRegistry *v14; // rcx
  __int64 v15; // rdi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  CBaseObject *v22; // rcx
  __int64 v23; // rsi
  CBaseObject *v24; // rcx
  CBaseObject **v25; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDesktopManager::`vftable';
  v3 = *((unsigned int *)this + 136);
  if ( (_DWORD)v3 )
  {
    v25 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 520, a2, &v25);
    v4 = v25;
    if ( v25 )
    {
      v5 = v25;
      do
      {
        CBaseObject::Release(*v5++);
        --v3;
      }
      while ( v3 );
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    CAnimationClockCoordinator::~CAnimationClockCoordinator(*((CAnimationClockCoordinator **)this + 21));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v6);
    *((_QWORD *)this + 21) = 0LL;
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 23));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    CTransitionVisualController::~CTransitionVisualController(*((CTransitionVisualController **)this + 24));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v8);
    *((_QWORD *)this + 24) = 0LL;
  }
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 20));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
    *((_QWORD *)this + 20) = 0LL;
  }
  v10 = (CWindowList *)*((_QWORD *)this + 54);
  if ( v10 )
  {
    CWindowList::`vector deleting destructor'(v10, 1u);
    *((_QWORD *)this + 54) = 0LL;
  }
  if ( *((_QWORD *)this + 58) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 58) = 0LL;
  }
  CDesktopManager::ReleaseDCompResources(this);
  v11 = (CBaseObject *)*((_QWORD *)this + 57);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CTextCache *)*((_QWORD *)this + 26);
  if ( v12 )
  {
    CTextCache::`scalar deleting destructor'(v12, 1u);
    *((_QWORD *)this + 26) = 0LL;
  }
  v13 = (CIconicBitmapRegistry *)*((_QWORD *)this + 29);
  if ( v13 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v13, 1u);
    *((_QWORD *)this + 29) = 0LL;
  }
  v14 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 30);
  if ( v14 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v14, 1u);
    *((_QWORD *)this + 30) = 0LL;
  }
  v15 = *((_QWORD *)this + 28);
  if ( v15 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(*((__int64 **)this + 28));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v15);
    *((_QWORD *)this + 28) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v16 = (__int64 *)((char *)this + 48);
  v17 = *((_QWORD *)this + 6);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v17 + 24) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = *v16;
    *v16 = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 31);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)this + 31) = 0LL;
  }
  v21 = *((_QWORD *)this + 32);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    *((_QWORD *)this + 32) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  v22 = (CBaseObject *)*((_QWORD *)this + 97);
  if ( v22 )
    CBaseObject::Release(v22);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 91);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 65);
  v23 = *((_QWORD *)this + 27);
  if ( v23 )
  {
    CCompositionEffectCache::~CCompositionEffectCache(*((CCompositionEffectCache **)this + 27));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v23);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 13);
  v24 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v24 )
    CBaseObject::Release(v24);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)this + 6);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
