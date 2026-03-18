/*
 * XREFs of ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C7600
 * Callers:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C7300 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180240710 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802CAA00 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 * Callees:
 *     ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x1802BA7F8 (-NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x1802BFF08 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 */

void __fastcall CLegacySwapChain::PrePresent(CLegacySwapChain *this, char a2)
{
  if ( a2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
      CD3DDevice::NotifyNoSequencePresent(
        *((CD3DDevice **)this + 8),
        *(struct _LUID *)((char *)this + 76),
        *((_DWORD *)this + 18));
  }
  else
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 128LL))((char *)this + 24);
  }
}
