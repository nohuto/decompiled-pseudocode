/*
 * XREFs of ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1800D89A0
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B59C4 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x180070EAC (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8A74 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D8BE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGI.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x1800D8C4C (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AF20C (-InternalAddRef@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(
        TabletModeCoverWindow **a1,
        struct IUnknown **a2)
{
  TabletModeCoverWindow *v4; // rax
  TabletModeCoverWindow *v5; // rbx
  int v6; // edi
  TabletModeCoverWindow *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (TabletModeCoverWindow *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = TabletModeCoverWindow::TabletModeCoverWindow(v4);
  v8 = v5;
  v9 = 0LL;
  v6 = TabletModeCoverWindow::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalAddRef(&v8);
    *a1 = v5;
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v8);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
    return 0LL;
  }
  else
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::Release(v5);
    return (unsigned int)v6;
  }
}
