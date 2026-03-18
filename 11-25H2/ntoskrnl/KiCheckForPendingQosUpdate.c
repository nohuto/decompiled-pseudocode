/*
 * XREFs of KiCheckForPendingQosUpdate @ 0x14027556C
 * Callers:
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 */

__int64 __fastcall KiCheckForPendingQosUpdate(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  char v6; // si
  int v7; // edi
  char v8; // al
  _KPRCBFLAG v9; // ecx
  unsigned int v10; // ecx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // r8
  unsigned int v13; // r9d
  _KPRCBFLAG v14; // r8d
  char v15; // di
  _DWORD *SchedulerAssist; // r8
  int v17; // ett
  int v18; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(result) = CurrentPrcb->PrcbFlags.PrcbFlags;
  if ( (result & 0x100) != 0 )
  {
    result = KeDisableInterrupts(a1, a2, a1);
    v14.PrcbFlags = (volatile int)CurrentPrcb->PrcbFlags;
    v15 = result;
    if ( v13 == LOBYTE(v14.PrcbFlags) )
    {
      CurrentPrcb->PrcbFlagsReserved = v14.PrcbFlags & 0xFFFFFEFF;
    }
    else
    {
      result = PoSetProcessorQos(CurrentPrcb, v13);
      if ( (_BYTE)result )
        CurrentPrcb->PrcbFlagsReserved &= ~0x100u;
    }
    if ( (CurrentPrcb->PrcbFlagsReserved & 0x100) == 0 )
      result = KeUpdatePendingQosRequest(CurrentPrcb);
    if ( v15 )
    {
      v11 = KeGetCurrentPrcb();
      SchedulerAssist = v11->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_12;
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v17 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v17 != (_DWORD)result );
      goto LABEL_24;
    }
  }
  else
  {
    result = (unsigned __int8)result;
    if ( KeHeteroSystemQos && *(unsigned __int8 *)(a1 + 516) != (unsigned __int8)result )
    {
      result = KeDisableInterrupts(a1, a2, a1);
      v5 = *(unsigned __int8 *)(v4 + 516);
      v6 = result;
      if ( (_DWORD)v5 != (unsigned __int8)CurrentPrcb->PrcbFlags.PrcbFlags )
      {
        v7 = CurrentPrcb->PrcbFlagsReserved & 0x100;
        v8 = PoSetProcessorQos(CurrentPrcb, v5);
        v9.PrcbFlags = (volatile int)CurrentPrcb->PrcbFlags;
        if ( v8 )
          v10 = v9.PrcbFlags & 0xFFFFFEFF;
        else
          v10 = v9.PrcbFlags | 0x100;
        CurrentPrcb->PrcbFlagsReserved = v10;
        result = v7 != 0;
        if ( (_DWORD)result != ((v10 >> 8) & 1) )
          result = KeUpdatePendingQosRequest(CurrentPrcb);
      }
      if ( v6 )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        if ( !v12 )
        {
LABEL_12:
          _enable();
          return result;
        }
        _m_prefetchw(v12);
        LODWORD(result) = *v12;
        do
        {
          v18 = result;
          result = (unsigned int)_InterlockedCompareExchange(v12, result & 0xFFDFFFFF, result);
        }
        while ( v18 != (_DWORD)result );
LABEL_24:
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(v11);
        goto LABEL_12;
      }
    }
  }
  return result;
}
