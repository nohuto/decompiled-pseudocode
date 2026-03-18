/*
 * XREFs of KiCheckForPendingQosUpdate @ 0x14029DE4C
 * Callers:
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x14029E1A0 (PoSetProcessorQos.c)
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 */

__int64 __fastcall KiCheckForPendingQosUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  unsigned int v5; // r9d
  _KPRCBFLAG v6; // r8d
  char v7; // di
  struct _KPRCB *v8; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(result) = CurrentPrcb->PrcbFlags.PrcbFlags;
  if ( (result & 0x100) != 0 )
  {
    result = KeDisableInterrupts(a1, a2, a3);
    v6.PrcbFlags = (volatile int)CurrentPrcb->PrcbFlags;
    v7 = result;
    if ( v5 == LOBYTE(v6.PrcbFlags) )
    {
      CurrentPrcb->PrcbFlagsReserved = v6.PrcbFlags & 0xFFFFFEFF;
    }
    else
    {
      result = PoSetProcessorQos(CurrentPrcb, v5);
      if ( (_BYTE)result )
        CurrentPrcb->PrcbFlagsReserved &= ~0x100u;
    }
    if ( (CurrentPrcb->PrcbFlagsReserved & 0x100) == 0 )
      result = KeUpdatePendingQosRequest(CurrentPrcb);
    if ( v7 )
    {
      v8 = KeGetCurrentPrcb();
      SchedulerAssist = v8->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v10 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v10 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
      _enable();
    }
  }
  else
  {
    result = (unsigned __int8)result;
    if ( *(unsigned __int8 *)(a1 + 516) != (unsigned __int8)result )
      return KeCheckAndApplyBamQos(CurrentPrcb, a1);
  }
  return result;
}
