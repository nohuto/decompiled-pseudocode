/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802CD8E0
 * Callers:
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1802BCFDC (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1805317C0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>(
        CWRLObjectWithGITSite *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
