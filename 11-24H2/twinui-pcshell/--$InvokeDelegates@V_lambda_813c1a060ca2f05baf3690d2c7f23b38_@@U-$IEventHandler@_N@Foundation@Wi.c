/*
 * XREFs of ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18023CDC8
 * Callers:
 *     ??$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@Z @ 0x18023CD18 (--$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@-$EventSource@U-$IEventHandler@_N@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18003AFE8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1802176B4 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@In.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_813c1a060ca2f05baf3690d2c7f23b38_,Windows::Foundation::IEventHandler<bool>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  struct IUnknown **v9; // rsi
  _BYTE *v10; // rbp
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v17, a2);
  v7 = (__int64)v17;
  v8 = v17[4];
  v9 = (struct IUnknown **)v17[2];
  if ( v9 == (struct IUnknown **)v17[3] )
    goto LABEL_20;
  v10 = (_BYTE *)a1[1];
  v11 = (_QWORD *)*a1;
  while ( 1 )
  {
    LOBYTE(v6) = *v10;
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64))(*v9)->lpVtbl[1].QueryInterface)(*v9, *v11, v6);
    v5 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v9);
      goto LABEL_12;
    }
    if ( v12 < 0 )
      break;
LABEL_13:
    v8 += 8LL;
    if ( ++v9 == *(struct IUnknown ***)(v7 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v13 = v5;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v16);
  v5 = 0;
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v7 = (__int64)v17;
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  return v5;
}
