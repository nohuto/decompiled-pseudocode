/*
 * XREFs of KiInitializeProcessorCycleAccumulation @ 0x1405AD634
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpComputeFraction @ 0x1404F79F4 (RtlpComputeFraction.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405AD70C (KiRebaselineProcessorStartCycles.c)
 */

__int64 __fastcall KiInitializeProcessorCycleAccumulation(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r9
  char v4; // al
  unsigned __int64 v5; // rax
  bool v6; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 68);
  v11 = 0;
  v3 = RtlpComputeFraction(1000000 * v1, MEMORY[0xFFFFF78000000300], &v11);
  v4 = v11;
  if ( v11 < 0 )
  {
    v5 = v3 + (unsigned int)(1 << ~v11);
    if ( v5 < v3 )
      v5 = v3;
    v3 = v5 >> -v11;
    v4 = 0;
    v11 = 0;
  }
  *(_QWORD *)(a1 + 176) = v3;
  *(_BYTE *)(a1 + 172) = v4;
  v6 = KeDisableInterrupts();
  result = KiRebaselineProcessorStartCycles(a1);
  *(_BYTE *)(a1 + 34524) = 1;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
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
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
