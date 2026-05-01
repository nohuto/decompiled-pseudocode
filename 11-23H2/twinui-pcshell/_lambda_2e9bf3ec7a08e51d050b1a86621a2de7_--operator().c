/*
 * XREFs of _lambda_2e9bf3ec7a08e51d050b1a86621a2de7_::operator() @ 0x18077905C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_2e9bf3ec7a08e51d050b1a86621a2de7___::Invoke @ 0x1807793E0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--Xaml--Media--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$query@UIXamlAltTabViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlAltTabViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x18028BE0A (--$query@UIXamlAltTabViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_polic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?revoke@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x18077B458 (-revoke@-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8typ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2e9bf3ec7a08e51d050b1a86621a2de7_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 (__fastcall ****v3)(_QWORD, GUID *, _QWORD *); // rbx
  _QWORD *v4; // rax
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAltTabViewController__, a1);
  v5[0] = v1;
  result = __abi_winrt_ptr_ctor(v1);
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))result;
  v5[1] = result;
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v3 )
  {
    v4 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlAltTabViewHostInternal>(v3 + 7, v5);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v5);
    _revoke___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXXZ(v3 + 40);
    return ((__int64 (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
  }
  return result;
}
