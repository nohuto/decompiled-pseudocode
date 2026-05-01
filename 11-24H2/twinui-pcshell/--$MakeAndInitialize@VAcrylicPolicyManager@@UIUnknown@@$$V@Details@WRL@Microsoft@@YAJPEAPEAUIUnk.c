/*
 * XREFs of ??$MakeAndInitialize@VAcrylicPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802E0334
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VAcrylicPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E0D20 (-CreateInstance@-$SimpleClassFactory@VAcrylicPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA03C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1800DA03C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EA4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801EA4B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AcrylicPolicyManager@@QEAA@XZ @ 0x1802E0550 (--0AcrylicPolicyManager@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAcrylicPolicyManager@@@WRL@Microsoft@@QEAAXPEAVAcrylicPolicyManager@@@Z @ 0x1802E0CE4 (-Attach@-$ComPtr@VAcrylicPolicyManager@@@WRL@Microsoft@@QEAAXPEAVAcrylicPolicyManager@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AcrylicPolicyManager,IUnknown,>(void **a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  AcrylicPolicyManager *v4; // rax
  void **v5; // r8
  char *v6; // rbx
  char *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v4 = AcrylicPolicyManager::AcrylicPolicyManager((AcrylicPolicyManager *)v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<AcrylicPolicyManager>::Attach(&v8, v4);
    v9 = 0LL;
    v5 = a1;
    v6 = v8;
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>>(
           v8,
           &GUID_00000000_0000_0000_c000_000000000046,
           v5);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::Release();
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return v3;
}
