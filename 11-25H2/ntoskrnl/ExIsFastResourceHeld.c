/*
 * XREFs of ExIsFastResourceHeld @ 0x1403F9DC0
 * Callers:
 *     DifExIsFastResourceHeldWrapper @ 0x140613540 (DifExIsFastResourceHeldWrapper.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int8 v13; // bp
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rsi
  unsigned __int64 *i; // rcx

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
    v11 = *SchedulerAssist;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !v5 )
    return 0LL;
  if ( v5 == 1 )
  {
    v13 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v13);
    if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
    {
      i = (unsigned __int64 *)(BugCheckParameter2 + 64);
LABEL_32:
      if ( i )
      {
        v10 = 1;
LABEL_35:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
        return v10;
      }
    }
    else
    {
      p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
      for ( i = (unsigned __int64 *)*p_LastXStateSaveDebugInfo; i != p_LastXStateSaveDebugInfo; i = (unsigned __int64 *)*i )
      {
        if ( (*((_BYTE *)i + 37) & 2) == 0 && i[3] == BugCheckParameter2 )
          goto LABEL_32;
      }
    }
    v10 = 0;
    goto LABEL_35;
  }
  return 1;
}
