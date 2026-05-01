/*
 * XREFs of ??$?RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@QEBA?A_P$$QEAPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@$$QEA_K@Z @ 0x180340C2C
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@_K@Z@Details@WRL@Microsoft@@UEAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Z @ 0x180351ED0 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft_ea_180351ED0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A7558 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_cfa7a84dcd71ac538ef1b41290c62765_::operator()<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>(
        Microsoft::WRL::AgileRef *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v5; // ebx
  void *v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(a1, &GUID_19ee288b_05be_512f_af2f_665080534721, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *a2, *a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v5;
}
