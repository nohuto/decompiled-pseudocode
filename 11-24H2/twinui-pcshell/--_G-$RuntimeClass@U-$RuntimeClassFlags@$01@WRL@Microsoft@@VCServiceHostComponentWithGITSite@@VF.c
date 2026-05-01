/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180583ED0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@WCI@EAAPEAXI@Z @ 0x180583EA0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VF.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCServiceHostComponentWithGITSite@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1805837D8 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCServiceH.c)
 */

CWRLObjectWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        CWRLObjectWithGITSite *a1,
        char a2)
{
  *((_DWORD *)a1 + 35) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
