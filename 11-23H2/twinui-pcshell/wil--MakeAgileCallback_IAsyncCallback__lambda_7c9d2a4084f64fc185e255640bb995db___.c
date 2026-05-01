/*
 * XREFs of wil::MakeAgileCallback_IAsyncCallback__lambda_7c9d2a4084f64fc185e255640bb995db___ @ 0x1801F43A8
 * Callers:
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D3960 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180070240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180070240.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_7c9d2a4084f64fc185e255640bb995db___1_long___lambda_7c9d2a4084f64fc185e255640bb995db___ @ 0x1801F4120 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1801F4120.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_IAsyncCallback__lambda_7c9d2a4084f64fc185e255640bb995db___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  const char *v4; // r9
  volatile int *v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_7c9d2a4084f64fc185e255640bb995db___1_long___lambda_7c9d2a4084f64fc185e255640bb995db___(
         &v9,
         a2);
  v5 = (volatile int *)*v3;
  *a1 = *v3;
  *v3 = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
      v6,
      v5);
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x53,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v4);
  return a1;
}
