/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@E@Z @ 0x18013BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RPEAUIInspectable@@E@_lambda_7a5cfbbed259c3858157510f0ba1f330_@@QEBA?A_P$$QEAPEAUIInspectable@@$$QEAE@Z @ 0x18013BDFC (--$-RPEAUIInspectable@@E@_lambda_7a5cfbbed259c3858157510f0ba1f330_@@QEBA-A_P$$QEAPEAUIInspectabl.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18013C198 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_7a5cfbbed259c3858157510f0ba1f330_,-1,IInspectable *,unsigned char>::Invoke(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v7[0] = a3;
  v3 = _lambda_7a5cfbbed259c3858157510f0ba1f330_::operator()<IInspectable *,unsigned char>(a1 + 64, &v6, v7);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
