/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1805682F0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1801D7D60 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802BFE34 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802BFE34.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitchAnimator::RuntimeClassInitialize(
        VirtualDesktopSwitchAnimator *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate *a3,
        struct IMultitaskingViewVisibilityService *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  void *v9; // rdx

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, (__int64)a2);
  if ( *((struct IVirtualDesktopAnimationSyncNotificationServicePrivate **)this + 26) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVirtualDesktopAnimationSyncNotificationServicePrivate *))(*(_QWORD *)a3 + 8LL))(a3);
    v7 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = a3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IMultitaskingViewVisibilityService *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (wil::details **)this + 28,
    1,
    0LL);
  wil::details::SetEvent(*((wil::details **)this + 28), v9);
  return 0LL;
}
