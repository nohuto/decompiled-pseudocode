/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x1800790C8
 * Callers:
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x18007901C (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1801E2AC4 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x1802A1C98 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x1802CF27C (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18032389C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x18049AF10 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x1804B2B10 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1804E8CFC (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180516F08 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x18059C538 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x1802D2EFA (InitializeSRWLock_0.c)
 */

CGITRegistrationList *__fastcall CGITRegistrationList::CGITRegistrationList(CGITRegistrationList *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock_0((PSRWLOCK)this + 1);
  return this;
}
