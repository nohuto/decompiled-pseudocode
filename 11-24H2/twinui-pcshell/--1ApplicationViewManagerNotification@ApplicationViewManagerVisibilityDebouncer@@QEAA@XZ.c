/*
 * XREFs of ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x18002CC84
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002E150 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18002E444 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$3 @ 0x1806CB4FA (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$3.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$6 @ 0x1806CB50C (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$6.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$13 @ 0x1806CB51E (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$13.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$14 @ 0x1806CB530 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$14.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$1 @ 0x1806CB554 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
