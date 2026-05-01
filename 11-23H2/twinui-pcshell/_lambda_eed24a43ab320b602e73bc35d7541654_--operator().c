/*
 * XREFs of _lambda_eed24a43ab320b602e73bc35d7541654_::operator() @ 0x18068AE5C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x18068B430 (winrt--impl--delegate_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoundaryH.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x18068BEAC (-RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_eed24a43ab320b602e73bc35d7541654_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  volatile signed __int64 *v3; // rbx
  const struct _tlgProvider_t *v4; // rax
  volatile signed __int64 *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<IInspectable>,
      &v6);
    if ( v6 )
      v3 = (volatile signed __int64 *)(v6 - 16);
    else
      v3 = 0LL;
    v6 = 0LL;
    v5 = v3;
  }
  else
  {
    v5 = 0LL;
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = WindowManagementLogging::Provider(v2);
    if ( *(_DWORD *)v4 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (int)v4,
        (int)&unk_180875492,
        0);
    WindowDragInputProvider::RegisterForCustomDockTargetMessages((WindowDragInputProvider *)v3);
  }
  if ( v3 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v5);
}
