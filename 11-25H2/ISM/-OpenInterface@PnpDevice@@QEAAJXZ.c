/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800E44E0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E6B2C (-Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800E316C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800E43A8 (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
  {
    v2 = PnpDevice::OpenInterface(this, 0xC0000000, 3u);
    if ( v2 < 0 )
    {
      v3 = 378LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
  }
  else
  {
    v2 = PnpDevice::OpenInterface(this, 0xC0000000, 0);
    if ( v2 < 0 )
    {
      v3 = 382LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
