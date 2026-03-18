/*
 * XREFs of KiWakeAddressAll @ 0x140456110
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14041FAB0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiHaltOnAddress @ 0x1404F7BE4 (KiHaltOnAddress.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

__int64 KiWakeAddressAll()
{
  bool v0; // bl
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v7; // ett

  v0 = KeDisableInterrupts();
  result = KiHaltOnAddressWakeEntireList(v3, _InterlockedExchange64((volatile __int64 *)(v2 + 8 * v1), 0LL));
  if ( v0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v7 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v7 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
