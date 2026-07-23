/*
 * XREFs of ExIsFastResourceHeld @ 0x1403FC4D0
 * Callers:
 *     DifExIsFastResourceHeldWrapper @ 0x14061DAC0 (DifExIsFastResourceHeldWrapper.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExIsFastResourceHeld(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v5; // rbx
  unsigned __int64 *SparePtr; // rcx
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // bp
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rsi
  unsigned __int64 *i; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett

  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 && (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    return 0LL;
  _disable();
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
  {
    v5 = BugCheckParameter2 + 64;
  }
  else
  {
    v5 = 0LL;
    SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
    v7 = 0LL;
    while ( SparePtr != &CurrentThread[1].LastXStateSaveDebugInfo )
    {
      if ( (*((_BYTE *)SparePtr + 37) & 2) == 0 && SparePtr[3] == BugCheckParameter2 )
      {
        v5 = (__int64)SparePtr;
        break;
      }
      SparePtr = (unsigned __int64 *)*SparePtr;
      if ( (unsigned __int64)++v7 > 6 )
      {
        v5 = 1LL;
        break;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v14 = *SchedulerAssist;
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !v5 )
    return 0LL;
  if ( v5 == 1 )
  {
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
    if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
    {
      i = (unsigned __int64 *)(BugCheckParameter2 + 64);
LABEL_28:
      if ( i )
      {
        v10 = 1;
LABEL_31:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v11);
        return v10;
      }
    }
    else
    {
      p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
      for ( i = (unsigned __int64 *)*p_LastXStateSaveDebugInfo; i != p_LastXStateSaveDebugInfo; i = (unsigned __int64 *)*i )
      {
        if ( (*((_BYTE *)i + 37) & 2) == 0 && i[3] == BugCheckParameter2 )
          goto LABEL_28;
      }
    }
    v10 = 0;
    goto LABEL_31;
  }
  return 1;
}
