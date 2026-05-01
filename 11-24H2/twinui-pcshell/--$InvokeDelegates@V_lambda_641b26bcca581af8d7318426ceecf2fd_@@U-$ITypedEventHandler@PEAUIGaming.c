/*
 * XREFs of ??$InvokeDelegates@V_lambda_641b26bcca581af8d7318426ceecf2fd_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_641b26bcca581af8d7318426ceecf2fd_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180341960
 * Callers:
 *     ??$DoInvoke@V_lambda_641b26bcca581af8d7318426ceecf2fd_@@@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_641b26bcca581af8d7318426ceecf2fd_@@@Z @ 0x180208D1C (--$DoInvoke@V_lambda_641b26bcca581af8d7318426ceecf2fd_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@Z @ 0x1803416BC (--$DoInvoke@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18003AFE8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1802176B4 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@In.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_641b26bcca581af8d7318426ceecf2fd_,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>>(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r15
  struct IUnknown **v8; // rsi
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  int v11; // eax
  unsigned int v12; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, a2);
  v6 = (__int64)v16;
  v7 = v16[4];
  v8 = (struct IUnknown **)v16[2];
  if ( v8 == (struct IUnknown **)v16[3] )
    goto LABEL_20;
  v9 = *(_QWORD **)(a1 + 8);
  v10 = *(_QWORD **)a1;
  while ( 1 )
  {
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*v8)->lpVtbl[1].QueryInterface)(
            *v8,
            (*v10 + 136LL) & -(__int64)(*v10 != 0LL),
            *v9);
    v5 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError((unsigned int)v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v8);
      goto LABEL_12;
    }
    if ( v11 < 0 )
      break;
LABEL_13:
    v7 += 8LL;
    if ( ++v8 == *(struct IUnknown ***)(v6 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v12 = v5;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v8, v15);
  v5 = 0;
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v12;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v6 = (__int64)v16;
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return v5;
}
