/*
 * XREFs of ??$DoInvoke@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@Z @ 0x18008B844
 * Callers:
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AE54 (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008BB18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18030B1A0 (--$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U-$ITypedEventHandler@PEAVSplashS.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_a48ac9b22b1e533b001c2bec4634345b_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_a48ac9b22b1e533b001c2bec4634345b_,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>>(
           &v8,
           v9,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v4;
}
