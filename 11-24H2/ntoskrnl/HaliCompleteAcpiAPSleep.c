/*
 * XREFs of HaliCompleteAcpiAPSleep @ 0x140567430
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x1406A70F0 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpFlushAndWait @ 0x1406A6F10 (HalpFlushAndWait.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KeWriteProtectPAT @ 0x140B5C800 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliCompleteAcpiAPSleep(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  volatile signed __int32 *SchedulerAssist; // rax
  unsigned int v7; // ebx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_BYTE)a1 )
  {
    v3 = 0;
    while ( 1 )
    {
      result = (unsigned int)HalpFlushBarrier;
      if ( !HalpFlushBarrier )
        break;
      if ( (++v3 & dword_140FC111C) != 0 || !qword_140FC1120 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v3, a2);
    }
  }
  else
  {
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      LOBYTE(a1) = 1;
      KeWriteProtectPAT(a1);
    }
    if ( HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _InterlockedIncrement(&HalpFlushBarrier);
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
      v7 = 0;
      while ( 1 )
      {
        result = (unsigned int)HalpFlushBarrier;
        if ( !HalpFlushBarrier )
          break;
        if ( (++v7 & dword_140FC111C) != 0 || !qword_140FC1120 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v7, v5);
      }
    }
    else
    {
      return HalpFlushAndWait(&HalpFlushBarrier);
    }
  }
  return result;
}
