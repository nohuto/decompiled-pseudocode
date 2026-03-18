/*
 * XREFs of KiSetAddressPolicy @ 0x140321A30
 * Callers:
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x140321990 (KiLoadDirectoryTableBase.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140322460 (KiAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14048C9B0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140B5A87C (KiEnableKvaShadowing.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KxSetAddressPolicy @ 0x1406AB3F0 (KxSetAddressPolicy.c)
 */

__int64 __fastcall KiSetAddressPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v3; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v7; // ett

  v3 = KeDisableInterrupts(a1, a2, (unsigned int)a1);
  result = KxSetAddressPolicy(v2);
  if ( v3 )
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
