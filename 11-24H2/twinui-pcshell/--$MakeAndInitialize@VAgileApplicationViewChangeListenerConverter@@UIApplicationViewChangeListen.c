/*
 * XREFs of ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180046248
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801E3640 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0AgileApplicationViewChangeListenerConverter@@QEAA@XZ @ 0x180046314 (--0AgileApplicationViewChangeListenerConverter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180046370 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
        _QWORD *a1,
        struct IApplicationViewChangeListener **a2)
{
  void *v4; // rax
  AgileApplicationViewChangeListenerConverter *v5; // rdi
  int v6; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  AgileApplicationViewChangeListenerConverter *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (AgileApplicationViewChangeListenerConverter *)v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    return (unsigned int)v6;
  }
  v5 = AgileApplicationViewChangeListenerConverter::AgileApplicationViewChangeListenerConverter((AgileApplicationViewChangeListenerConverter *)v4);
  v9 = v5;
  v8 = 0LL;
  v6 = AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    if ( v5 )
      (*(void (__fastcall **)(AgileApplicationViewChangeListenerConverter *))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_8;
  }
  v6 = (**(__int64 (__fastcall ***)(AgileApplicationViewChangeListenerConverter *, GUID *, _QWORD *))v5)(
         v5,
         &GUID_727f9e97_76ee_497b_a942_b6371328485c,
         a1);
  (*(void (__fastcall **)(AgileApplicationViewChangeListenerConverter *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
