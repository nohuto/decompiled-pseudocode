/*
 * XREFs of ??1CWindowPropertyTracker@@QEAA@XZ @ 0x1800A8200
 * Callers:
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A8188 (--1CAnimationScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180043B1C (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 */

void __fastcall CWindowPropertyTracker::~CWindowPropertyTracker(CWindowPropertyTracker *this)
{
  CWindowPropertyTracker::StopTrackingAllWindows(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this);
}
