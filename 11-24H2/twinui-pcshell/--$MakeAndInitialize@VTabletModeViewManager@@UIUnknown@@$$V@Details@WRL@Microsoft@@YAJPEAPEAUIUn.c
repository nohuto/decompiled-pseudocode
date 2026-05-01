/*
 * XREFs of ??$MakeAndInitialize@VTabletModeViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E4B54
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E4AB0 (-CreateInstance@-$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabletModeViewManager@@QEAA@XZ @ 0x180520D50 (--0TabletModeViewManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  TabletModeViewManager *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  TabletModeViewManager *v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( !v2 )
  {
    v5 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    return v5;
  }
  v3 = TabletModeViewManager::TabletModeViewManager((TabletModeViewManager *)v2);
  v9 = v3;
  v8 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (TabletModeViewManager *)((char *)v3 + 24),
         &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v4);
    if ( v3 )
      (*(void (__fastcall **)(TabletModeViewManager *))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_8;
  }
  v5 = (**(__int64 (__fastcall ***)(TabletModeViewManager *, GUID *, _QWORD *))v3)(
         v3,
         &GUID_00000000_0000_0000_c000_000000000046,
         a1);
  (*(void (__fastcall **)(TabletModeViewManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}
