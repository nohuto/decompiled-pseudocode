/*
 * XREFs of ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803F61A8
 * Callers:
 *     ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803F6798 (-RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@S.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180014F50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FF41C (--4-$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 *v5; // rax
  __int64 *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (__int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>((Microsoft::WRL::FtmBase *)v5);
    *v6 = (__int64)&PenWorkspace::Discover::UTMIconLoader::`vftable';
    v6[5] = 0LL;
    v9 = v6;
    v10 = 0LL;
    if ( *a2 )
    {
      Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTile>::operator=(v6 + 5, *a2);
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
      *a1 = v6;
    }
    else
    {
      v4 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)0x80004003LL);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v10);
  return v4;
}
