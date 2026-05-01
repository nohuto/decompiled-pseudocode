/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@@012@@Z @ 0x18006B2A8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x18006B19C (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B330 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x18006CC60 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTitlebarConfiguration,ApplicationViewTitlebarConfiguration,>(
        ApplicationViewTitlebarConfiguration **a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  ApplicationViewTitlebarConfiguration *v4; // rax
  volatile int *v5; // rdx
  ApplicationViewTitlebarConfiguration *v6; // r8
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  ApplicationViewTitlebarConfiguration *v9; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v4 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration((ApplicationViewTitlebarConfiguration *)v3);
    v9 = v4;
    v6 = v4;
    v8 = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (ApplicationViewTitlebarConfiguration *)((char *)v4 + 44),
        v5);
    *a1 = v6;
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v9);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
