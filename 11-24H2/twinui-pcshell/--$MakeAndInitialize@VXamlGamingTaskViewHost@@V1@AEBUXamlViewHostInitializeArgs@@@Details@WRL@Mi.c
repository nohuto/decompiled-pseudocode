/*
 * XREFs of ??$MakeAndInitialize@VXamlGamingTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18069DDA0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18069DE58 (--$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlGamingTaskViewHost@@QEAA@XZ @ 0x18069E38C (--0XamlGamingTaskViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18069FBC4 (-InternalRelease@-$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A0968 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlGamingTaskViewHost,XamlGamingTaskViewHost,XamlViewHostInitializeArgs const &>(
        XamlGamingTaskViewHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  void *v4; // rax
  int v5; // edi
  XamlGamingTaskViewHost *v6; // rbx
  volatile int *v7; // rdx
  XamlGamingTaskViewHost *v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x370uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  v9 = (XamlGamingTaskViewHost *)v4;
  if ( v4 )
  {
    v6 = XamlGamingTaskViewHost::XamlGamingTaskViewHost((XamlGamingTaskViewHost *)v4);
    v9 = v6;
    v10 = 0LL;
    v5 = XamlGamingTaskViewHost::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlGamingTaskViewHost *)((char *)v6 + 132), v7);
      *a1 = v6;
      Microsoft::WRL::ComPtr<XamlGamingTaskViewHost>::InternalRelease(&v9);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<XamlGamingTaskViewHost>::InternalRelease(&v9);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return (unsigned int)v5;
}
