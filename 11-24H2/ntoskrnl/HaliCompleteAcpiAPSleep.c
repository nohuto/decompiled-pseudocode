/*
 * XREFs of HaliCompleteAcpiAPSleep @ 0x140569FA0
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x1406A60C0 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpFlushAndWait @ 0x1406A5EF0 (HalpFlushAndWait.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KeWriteProtectPAT @ 0x140B5A790 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliCompleteAcpiAPSleep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *SchedulerAssist; // rax
  unsigned int v11; // ebx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_BYTE)a1 )
  {
    v5 = 0;
    while ( 1 )
    {
      result = (unsigned int)HalpFlushBarrier;
      if ( !HalpFlushBarrier )
        break;
      if ( (++v5 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
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
      v11 = 0;
      while ( 1 )
      {
        result = (unsigned int)HalpFlushBarrier;
        if ( !HalpFlushBarrier )
          break;
        if ( (++v11 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v11, v7, v8, v9);
      }
    }
    else
    {
      return HalpFlushAndWait(&HalpFlushBarrier);
    }
  }
  return result;
}
