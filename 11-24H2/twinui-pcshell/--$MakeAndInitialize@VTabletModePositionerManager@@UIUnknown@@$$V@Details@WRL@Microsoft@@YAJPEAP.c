/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801DAE68
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DADB0 (-CreateInstance@-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180516F08 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // ebx
  TabletModePositionerManager *v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  TabletModePositionerManager *v9; // [rsp+48h] [rbp+10h]
  void *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v9 = (TabletModePositionerManager *)v2;
  if ( v2 )
  {
    v10 = v2;
    v4 = TabletModePositionerManager::TabletModePositionerManager((TabletModePositionerManager *)v2);
    v9 = v4;
    v8 = 0LL;
    v5 = CImmersiveShellComponent::RegisterServiceInformation(
           (TabletModePositionerManager *)((char *)v4 + 24),
           &GUID_05ac56a6_baf7_414f_b92c_7156052701de);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(TabletModePositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
      (*(void (__fastcall **)(TabletModePositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
      return v3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      (*(void (__fastcall **)(TabletModePositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return v3;
}
