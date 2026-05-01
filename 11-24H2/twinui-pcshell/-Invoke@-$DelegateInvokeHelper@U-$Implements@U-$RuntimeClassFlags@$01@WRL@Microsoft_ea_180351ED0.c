/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@_K@Z@Details@WRL@Microsoft@@UEAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Z @ 0x180351ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18013C198 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$?RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@QEBA?A_P$$QEAPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@$$QEA_K@Z @ 0x180340C2C (--$-RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@_lambda_cfa7a84dcd71.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,_lambda_cfa7a84dcd71ac538ef1b41290c62765_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v7 = a3;
  v3 = _lambda_cfa7a84dcd71ac538ef1b41290c62765_::operator()<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &v6,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
