/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1400823DC
 * Callers:
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14003E718 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  FxStump::operator delete(this);
  return this;
}
