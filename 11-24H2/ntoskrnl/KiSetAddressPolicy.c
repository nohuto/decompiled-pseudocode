/*
 * XREFs of KiSetAddressPolicy @ 0x1402CA5C0
 * Callers:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x1402CA520 (KiLoadDirectoryTableBase.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x1402CAFF0 (KiAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1404876D0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KxSetAddressPolicy @ 0x1406AC390 (KxSetAddressPolicy.c)
 */

__int64 __fastcall KiSetAddressPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  char v5; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v9; // ett

  v5 = KeDisableInterrupts(a1, a2, (unsigned int)a1, a4);
  result = KxSetAddressPolicy(v4);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
