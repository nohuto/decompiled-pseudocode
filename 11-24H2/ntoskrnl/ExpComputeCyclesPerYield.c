/*
 * XREFs of ExpComputeCyclesPerYield @ 0x140C0C900
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

__int64 ExpComputeCyclesPerYield()
{
  bool v0; // r8
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 result; // rax
  unsigned __int64 v9; // rbx

  v0 = KeDisableInterrupts();
  v1 = 256LL;
  v2 = __rdtsc();
  do
  {
    _mm_pause();
    --v1;
  }
  while ( v1 );
  v3 = __rdtsc();
  if ( v0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v6 = *SchedulerAssist;
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  result = 0xFFFFLL;
  v9 = (v3 - v2) >> 8;
  if ( v9 <= 0xFFFF )
  {
    result = v9;
    if ( !v9 )
      return 1LL;
  }
  return result;
}
