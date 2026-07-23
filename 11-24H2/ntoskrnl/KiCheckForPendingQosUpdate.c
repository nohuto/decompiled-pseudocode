/*
 * XREFs of KiCheckForPendingQosUpdate @ 0x1402AC93C
 * Callers:
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x1402ACC90 (PoSetProcessorQos.c)
 *     KeUpdatePendingQosRequest @ 0x1402AD48C (KeUpdatePendingQosRequest.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

__int64 __fastcall KiCheckForPendingQosUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // r9
  __int64 result; // rax
  unsigned int v6; // r9d
  _KPRCBFLAG v7; // r8d
  char v8; // di
  struct _KPRCB *v9; // rcx
  _DWORD *SchedulerAssist; // r8
  int v11; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(unsigned __int8 *)(a1 + 516);
  LODWORD(result) = CurrentPrcb->PrcbFlags.PrcbFlags;
  if ( (result & 0x100) != 0 )
  {
    result = KeDisableInterrupts(a1, a2, a3, v4);
    v7.PrcbFlags = (volatile int)CurrentPrcb->PrcbFlags;
    v8 = result;
    if ( v6 == LOBYTE(v7.PrcbFlags) )
    {
      CurrentPrcb->PrcbFlagsReserved = v7.PrcbFlags & 0xFFFFFEFF;
    }
    else
    {
      result = PoSetProcessorQos(CurrentPrcb, v6);
      if ( (_BYTE)result )
        CurrentPrcb->PrcbFlagsReserved &= ~0x100u;
    }
    if ( (CurrentPrcb->PrcbFlagsReserved & 0x100) == 0 )
      result = KeUpdatePendingQosRequest(CurrentPrcb);
    if ( v8 )
    {
      v9 = KeGetCurrentPrcb();
      SchedulerAssist = v9->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v11 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v11 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
      _enable();
    }
  }
  else
  {
    result = (unsigned __int8)result;
    if ( (_DWORD)v4 != (unsigned __int8)result )
      return KeCheckAndApplyBamQos(CurrentPrcb, a1);
  }
  return result;
}
