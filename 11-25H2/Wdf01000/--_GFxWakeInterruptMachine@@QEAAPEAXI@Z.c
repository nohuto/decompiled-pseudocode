/*
 * XREFs of ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A9118
 * Callers:
 *     ??1FxPoxInterface@@QEAA@XZ @ 0x14008428C (--1FxPoxInterface@@QEAA@XZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1400A9140 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1400A9360 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1400AA600 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004C68C (--1FxThreadedEventQueue@@QEAA@XZ.c)
 */

FxDevicePwrRequirementMachine *__fastcall FxWakeInterruptMachine::`scalar deleting destructor'(
        FxDevicePwrRequirementMachine *this)
{
  FxThreadedEventQueue::~FxThreadedEventQueue((FxWorkItemEventQueue *)this);
  FxStump::operator delete(this);
  return this;
}
