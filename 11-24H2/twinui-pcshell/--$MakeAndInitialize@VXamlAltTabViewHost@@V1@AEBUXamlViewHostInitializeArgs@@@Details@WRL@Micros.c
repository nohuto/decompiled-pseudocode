/*
 * XREFs of ??$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180119344
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1801192DC (--$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$Co.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099DB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_180099DB0.c)
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x1801193FC (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18011963C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180119A8C (-InternalRelease@-$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAltTabViewHost,XamlAltTabViewHost,XamlViewHostInitializeArgs const &>(
        XamlAltTabViewHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  XamlAltTabViewHost *v4; // rax
  XamlAltTabViewHost *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  XamlAltTabViewHost *v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (XamlAltTabViewHost *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = XamlAltTabViewHost::XamlAltTabViewHost(v4);
  v9 = v5;
  v10 = 0LL;
  v7 = XamlAltTabViewHost::RuntimeClassInitialize(v5, a2);
  if ( v7 >= 0 )
  {
    if ( v5 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlAltTabViewHost *)((char *)v5 + 132), v6);
    *a1 = v5;
    Microsoft::WRL::ComPtr<XamlAltTabViewHost>::InternalRelease(&v9);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    return 0LL;
  }
  else
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::Release(
        (__int64)v5,
        v6);
    return (unsigned int)v7;
  }
}
