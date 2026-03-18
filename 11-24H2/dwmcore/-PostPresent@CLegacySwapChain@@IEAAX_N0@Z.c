/*
 * XREFs of ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C7654
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C7300 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180240710 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802CAA00 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802CAB20 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 * Callees:
 *     ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002D0F0 (-GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x1801ED7E0 (-GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAA_NXZ @ 0x1802885D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2, char a3)
{
  bool v3; // bl
  __int64 v7; // rcx
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  int v9; // eax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkScanoutBuffer2>::GetImpl'::`2'::impl) )
    {
      if ( !a3 )
      {
        v7 = *((_QWORD *)this + 36);
        v10 = 0;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 120LL))(v7, &v10) >= 0 )
        {
          PhysicalBuffer = CLegacySwapChain::GetPhysicalBuffer(
                             (CLegacySwapChain *)((char *)this + 24),
                             *((_DWORD *)this + 125));
          (*(void (__fastcall **)(struct ISwapChainBuffer *, _QWORD))(*(_QWORD *)PhysicalBuffer + 144LL))(
            PhysicalBuffer,
            v10);
        }
      }
    }
    *((_DWORD *)this + 125) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 256LL))(*((_QWORD *)this + 36));
    **((_DWORD **)this + 23) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP,
        *((unsigned int *)this + 125));
  }
  CLegacySwapChain::GetVidPnTargetId((CLegacySwapChain *)((char *)this + 24));
  if ( !a2 )
  {
    v9 = *((_DWORD *)this + 126);
    if ( v9 )
    {
      v3 = 1;
      *((_DWORD *)this + 126) = v9 - 1;
    }
  }
  CScribbleSwapChain::PostPresentForComputeScribble(this, v3);
}
