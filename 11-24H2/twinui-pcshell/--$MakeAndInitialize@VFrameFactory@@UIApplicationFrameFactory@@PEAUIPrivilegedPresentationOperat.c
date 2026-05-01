/*
 * XREFs of ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1801FDD00
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18009F930 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FrameFactory@@QEAA@XZ @ 0x1802B3CDC (--0FrameFactory@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x1802C20C4 (-RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
        _QWORD *a1,
        struct IPrivilegedPresentationOperations **a2)
{
  void *v4; // rax
  FrameFactory *v6; // rdi
  int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = FrameFactory::FrameFactory((FrameFactory *)v4);
  v8 = 0LL;
  v7 = FrameFactory::RuntimeClassInitialize(v6, *a2);
  if ( v7 < 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(FrameFactory *))(*(_QWORD *)v6 + 16LL))(v6);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  else
  {
    v7 = (**(__int64 (__fastcall ***)(FrameFactory *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
           a1);
    (*(void (__fastcall **)(FrameFactory *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v7;
}
