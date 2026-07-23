/*
 * XREFs of PopFxIdleComponent @ 0x14034C3F8
 * Callers:
 *     PopFxDeactivateComponentDependencies @ 0x140349158 (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x14034C328 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x14034C3C0 (PoFxIdleComponent.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1403587D0 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A5C00 (PopFxResidentTimeoutRoutine.c)
 *     PoFxAddComponentRelation @ 0x1405CB690 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CBD40 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CBFA0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x1405CC2CC (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405CC710 (PopFxDeviceRelationsCleanup.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     PopFxQueueWorkOrder @ 0x1402812E8 (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorker @ 0x14034964C (PopFxIdleWorker.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxArmResidentTimer @ 0x1403A4B70 (PopFxArmResidentTimer.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3, void *a4)
{
  unsigned int v4; // ebp
  LARGE_INTEGER v8; // r8
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v8.QuadPart = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v10 = *(_QWORD *)(v9 + 144);
    v8 = InterruptTimePrecise;
    if ( v10 < InterruptTimePrecise.QuadPart )
    {
      do
      {
        v14 = v10;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 144), v8.QuadPart, v10);
        v10 = v15;
        if ( v14 == v15 )
          break;
        _mm_pause();
      }
      while ( v15 < v8.QuadPart );
    }
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 144);
  }
  if ( (*(_DWORD *)(v9 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v9, *(int *)(v9 + 88), 0LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v9 + 88)) == 0x80000000 )
  {
    if ( !v8.QuadPart )
      v8 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v9 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v8.QuadPart - v10 < (unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 96)) == 1 )
      {
        if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
          PopFxArmResidentTimer(0LL);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
    {
      v11 = *(_QWORD *)(v9 + 144);
      while ( v11 < v8.QuadPart )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 144), v8.QuadPart, v11);
        if ( v12 == v11 )
          break;
        _mm_pause();
      }
    }
    if ( (a3 & 2) != 0 )
    {
      PopFxQueueWorkOrder(v9 + 24, BugCheckParameter2);
    }
    else
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, v8.LowPart);
      PopFxIdleWorker((_QWORD *)BugCheckParameter2, v4, a4);
      if ( KeGetCurrentIrql() < 2u )
      {
        v17 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v17);
      }
    }
  }
}
