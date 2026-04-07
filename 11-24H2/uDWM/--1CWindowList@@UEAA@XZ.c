/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x1800ED848
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800B8880 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004BE48 (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180050970 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x180055AF0 (-IsEmpty@-$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009AF20 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800EDC6C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  CWindowList *v1; // rdi
  const struct std::nothrow_t *v2; // rdx
  __int64 v3; // rcx
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v5; // r9
  CBaseObject *v6; // rcx
  unsigned int v7; // edx
  CLoginTransition *v8; // rcx
  struct CWindowData **v9; // rax
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  PVOID v17; // rax
  const struct std::nothrow_t *v18; // rdx
  _QWORD *v19; // rsi
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  void *v22; // rcx
  struct wil::details::wnf_subscription_state_base *v23; // rdx
  PVOID v24; // rax
  PVOID v25; // rax
  PVOID v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID v28; // [rsp+40h] [rbp+8h] BYREF
  PVOID v29; // [rsp+48h] [rbp+10h] BYREF
  PVOID RestartKey; // [rsp+50h] [rbp+18h] BYREF

  v28 = this;
  v1 = this;
  *(_QWORD *)this = &CWindowList::`vftable';
  v29 = 0LL;
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v3, v2);
    winrt::Udwm::Transitions::TransitionManager::StopRotation(Current);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v5);
    v1 = (CWindowList *)v28;
  }
  v6 = (CBaseObject *)*((_QWORD *)v1 + 69);
  if ( v6 )
    CBaseObject::Release(v6);
  v8 = (CLoginTransition *)*((_QWORD *)v1 + 68);
  if ( v8 )
  {
    CLoginTransition::`scalar deleting destructor'(v8, v7);
    *((_QWORD *)v1 + 68) = 0LL;
  }
  while ( !CGenericSet<CWindowData *>::IsEmpty((struct _RTL_GENERIC_TABLE *)((char *)v1 + 312)) )
  {
    RestartKey = 0LL;
    v9 = (struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                  (PRTL_GENERIC_TABLE)((char *)v1 + 312),
                                  &RestartKey);
    CWindowList::ImmediateDestroySprite(v1, *v9);
  }
  while ( 1 )
  {
    v17 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v29);
    v19 = v17;
    if ( !v17 )
      break;
    v10 = (CBaseObject *)*((_QWORD *)v17 + 1);
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v19[2];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v19[3];
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = (CBaseObject *)v19[4];
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = (CBaseObject *)v19[5];
    if ( v14 )
      CBaseObject::Release(v14);
    v15 = (CBaseObject *)v19[6];
    if ( v15 )
      CBaseObject::Release(v15);
    v16 = (CBaseObject *)v19[7];
    if ( v16 )
      CBaseObject::Release(v16);
  }
  v20 = (CBaseObject *)*((_QWORD *)v1 + 11);
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = (CBaseObject *)*((_QWORD *)v1 + 10);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = (void *)*((_QWORD *)v1 + 66);
  if ( v22 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v22, v18);
    *((_QWORD *)v1 + 66) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v1 + 80);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)v1 + 78,
    v23);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)v1 + 77);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v1 + 71);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v1 + 70);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v1 + 67);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v1 + 62);
  while ( 1 )
  {
    v28 = 0LL;
    v24 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 424), &v28);
    if ( !v24 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 424), v24);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v1 + 48);
  while ( 1 )
  {
    v28 = 0LL;
    v25 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 312), &v28);
    if ( !v25 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 312), v25);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v1 + 35);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)v1 + 12);
  while ( 1 )
  {
    v28 = 0LL;
    v26 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v28);
    if ( !v26 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 8), v26);
  }
}
