/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x180108658
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800B3C90 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002E5CC (-StopRotation@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransition.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18002E604 (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800B59AC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180108BA8 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010928C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18010A8D8 (-IsEmpty@-$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  CWindowList *v1; // rdi
  unsigned int v2; // edx
  const char *v3; // r9
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CLoginTransition *v6; // rcx
  struct CWindowData *v7; // rdx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  PVOID v15; // rax
  _QWORD *v16; // rsi
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  struct wil::details::wnf_subscription_state_base *v19; // rdx
  wil::details *v20; // rcx
  char *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  PVOID v24; // rax
  PVOID v25; // rax
  PVOID v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID v28; // [rsp+50h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  PVOID v31; // [rsp+68h] [rbp+20h] BYREF

  v28 = this;
  v1 = this;
  *(_QWORD *)this = &CWindowList::`vftable';
  v31 = 0LL;
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)&v30);
    winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &RestartKey,
      v30);
    winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::StopRotation(&RestartKey);
    if ( RestartKey )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&RestartKey);
    if ( v30 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v30);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x44,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v3);
    v1 = (CWindowList *)v28;
  }
  v4 = (CBaseObject *)*((_QWORD *)v1 + 66);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)v1 + 70);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CLoginTransition *)*((_QWORD *)v1 + 69);
  if ( v6 )
  {
    CLoginTransition::`scalar deleting destructor'(v6, v2);
    *((_QWORD *)v1 + 69) = 0LL;
  }
  while ( !(unsigned __int8)CGenericSet<CWindowData *>::IsEmpty((char *)v1 + 312) )
  {
    RestartKey = 0LL;
    v7 = *(struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                   (PRTL_GENERIC_TABLE)((char *)v1 + 312),
                                   &RestartKey);
    CWindowList::ImmediateDestroySprite(v1, v7);
  }
  while ( 1 )
  {
    v15 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v31);
    v16 = v15;
    if ( !v15 )
      break;
    v8 = (CBaseObject *)*((_QWORD *)v15 + 1);
    if ( v8 )
      CBaseObject::Release(v8);
    v9 = (CBaseObject *)v16[2];
    if ( v9 )
      CBaseObject::Release(v9);
    v10 = (CBaseObject *)v16[3];
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v16[4];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v16[5];
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = (CBaseObject *)v16[6];
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = (CBaseObject *)v16[7];
    if ( v14 )
      CBaseObject::Release(v14);
  }
  v17 = (CBaseObject *)*((_QWORD *)v1 + 11);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = (CBaseObject *)*((_QWORD *)v1 + 10);
  if ( v18 )
    CBaseObject::Release(v18);
  if ( *((_QWORD *)v1 + 67) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)v1 + 67) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 81);
  v20 = (wil::details *)*((_QWORD *)v1 + 79);
  if ( v20 )
    wil::details::delete_wnf_subscription_state(v20, v19);
  v21 = (char *)*((_QWORD *)v1 + 78);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v21);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 72);
  v22 = (CBaseObject *)*((_QWORD *)v1 + 71);
  if ( v22 )
    CBaseObject::Release(v22);
  v23 = (CBaseObject *)*((_QWORD *)v1 + 68);
  if ( v23 )
    CBaseObject::Release(v23);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 62);
  while ( 1 )
  {
    v28 = 0LL;
    v24 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 424), &v28);
    if ( !v24 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 424), v24);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 48);
  while ( 1 )
  {
    v28 = 0LL;
    v25 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 312), &v28);
    if ( !v25 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 312), v25);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 35);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)v1 + 12);
  while ( 1 )
  {
    v28 = 0LL;
    v26 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v28);
    if ( !v26 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 8), v26);
  }
}
