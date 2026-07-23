/*
 * XREFs of ExInitializeFastResourceAcquired @ 0x14048A6B0
 * Callers:
 *     DifExInitializeFastResourceAcquiredWrapper @ 0x14061CE00 (DifExInitializeFastResourceAcquiredWrapper.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExInitializeFastResource2 @ 0x14048A860 (ExInitializeFastResource2.c)
 */

__int64 __fastcall ExInitializeFastResourceAcquired(ULONG_PTR a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v5; // bp
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  char v10; // al
  _QWORD *SparePtr; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v14; // ett
  char v15; // al
  struct _KTHREAD **v16; // rdx
  _DWORD *v17; // r8
  int v18; // ett

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  result = ExInitializeFastResource2(a1, a2 & 0xFFFFFFF9);
  v8 = 0LL;
  if ( (v5 & 6) != 0 )
  {
    result = (__int64)KeAbPreAcquire(a1, 0LL);
    v8 = result;
  }
  if ( (v5 & 2) != 0 )
  {
    v9 = (_QWORD *)(a1 + 64);
    *(_QWORD *)a1 |= 1uLL;
    *(_QWORD *)(a1 + 80) = CurrentThread;
    *(_DWORD *)(a1 + 96) = 1;
    if ( v8 )
    {
      v10 = *(_BYTE *)(v8 + 8) & 0x3F;
      *(_BYTE *)(v8 + 10) = 1;
      *(_BYTE *)(a1 + 100) = (2 * v10) | 1;
    }
    _disable();
    result = (__int64)&CurrentThread[1].WaitBlock[3].SparePtr;
    SparePtr = CurrentThread[1].WaitBlock[3].SparePtr;
    if ( (unsigned __int64 *)SparePtr[1] == &CurrentThread[1].LastXStateSaveDebugInfo )
    {
      *v9 = SparePtr;
      *(_QWORD *)(a1 + 72) = result;
      SparePtr[1] = v9;
      *(_QWORD *)result = v9;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v14 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v14 != (_DWORD)result );
LABEL_21:
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        goto LABEL_23;
      }
      goto LABEL_23;
    }
LABEL_17:
    __fastfail(3u);
  }
  if ( (v5 & 4) == 0 )
    return result;
  *(_QWORD *)a1 = *(_QWORD *)a1 & 3LL | 4;
  if ( a3 != a1 + 64 )
    *(_QWORD *)(a3 + 24) = a1;
  *(_QWORD *)(a3 + 16) = CurrentThread;
  *(_DWORD *)(a3 + 32) = 1;
  if ( v8 )
  {
    v15 = *(_BYTE *)(v8 + 8) & 0x3F;
    *(_BYTE *)(v8 + 10) = 1;
    *(_BYTE *)(a3 + 36) = (2 * v15) | 1;
  }
  _disable();
  result = (__int64)&CurrentThread[1].WaitBlock[3].SparePtr;
  v16 = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
  if ( v16[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
    goto LABEL_17;
  *(_QWORD *)a3 = v16;
  *(_QWORD *)(a3 + 8) = result;
  v16[1] = (struct _KTHREAD *)a3;
  *(_QWORD *)result = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = CurrentPrcb->SchedulerAssist;
  if ( v17 )
  {
    _m_prefetchw(v17);
    LODWORD(result) = *v17;
    do
    {
      v18 = result;
      result = (unsigned int)_InterlockedCompareExchange(v17, result & 0xFFDFFFFF, result);
    }
    while ( v18 != (_DWORD)result );
    goto LABEL_21;
  }
LABEL_23:
  _enable();
  return result;
}
