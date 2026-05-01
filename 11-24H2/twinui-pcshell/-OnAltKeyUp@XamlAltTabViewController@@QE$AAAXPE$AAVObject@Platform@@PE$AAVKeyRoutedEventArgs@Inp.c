/*
 * XREFs of ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z @ 0x180119D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004025C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040558 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040680 (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800406B4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800408A8 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180119EC4 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ??$query@UIAltTabViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAltTabViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x18011B108 (--$query@UIAltTabViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?get@Key@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA?AW4VirtualKey@System@6@XZ @ 0x1802CA2A8 (-get@Key@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA-AW4VirtualKey@System@6@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlAltTabViewController::OnAltKeyUp(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  bool v6; // bl
  DWORD v7; // edx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  void **v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[272]; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v13; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v14[48]; // [rsp+150h] [rbp+50h] BYREF

  if ( (unsigned int)Windows::UI::Xaml::Input::IKeyRoutedEventArgs::Key::get(a3) == 18 )
  {
    v9 = 0LL;
    v10 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 56LL))(a3, &v9);
    __abi_ThrowIfFailed(v5);
    if ( !BYTE1(v10) )
    {
      v6 = *(_QWORD *)(a1 + 56) != 0LL;
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v11,
        (__int64)"OnAltKeyUp");
      v11 = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
      XamlSwitcherTelemetry::OnAltKeyUp::StartActivity((XamlSwitcherTelemetry::OnAltKeyUp *)&v11, v6);
      if ( !*(_BYTE *)(a1 + 168) && *(_QWORD *)(a1 + 56) )
      {
        v8 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAltTabViewHost>(
                         a1 + 56,
                         &v9);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 64LL))(*v8);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v11, v7);
      v11 = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v11);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v14);
      wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v13);
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
    }
  }
}
