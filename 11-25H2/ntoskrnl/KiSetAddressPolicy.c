/*
 * XREFs of KiSetAddressPolicy @ 0x14028A690
 * Callers:
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiAttachProcess @ 0x1402891A0 (KiAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x14028A5F0 (KiLoadDirectoryTableBase.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14048D320 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140B4A90C (KiEnableKvaShadowing.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KxSetAddressPolicy @ 0x1406A0120 (KxSetAddressPolicy.c)
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
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
