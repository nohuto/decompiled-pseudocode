/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180224430
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x180461DE0 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x180237130 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024AADC (--0XamlLauncher@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1,
        _QWORD *a2)
{
  void *v4; // rax
  XamlLauncher *v6; // rbx
  volatile int *v7; // rdx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncher *v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (XamlLauncher *)v4;
  if ( !v4 )
    return 2147942414LL;
  v10 = v4;
  v6 = XamlLauncher::XamlLauncher((XamlLauncher *)v4);
  v9 = v6;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 47, (*a2 + 24LL) & -(__int64)(*a2 != 0LL));
  if ( v6 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlLauncher *)((char *)v6 + 116), v7);
  *a1 = v6;
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v9);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return 0LL;
}
