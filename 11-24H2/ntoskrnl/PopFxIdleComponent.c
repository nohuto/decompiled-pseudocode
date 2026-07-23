/*
 * XREFs of PopFxIdleComponent @ 0x1403A8D58
 * Callers:
 *     PopFxDeactivateComponentDependencies @ 0x140230AD4 (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1403A6294 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A8BF0 (PopFxResidentTimeoutRoutine.c)
 *     PoFxIdleComponent @ 0x1403A8D20 (PoFxIdleComponent.c)
 *     PoFxAddComponentRelation @ 0x1405CD500 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CDBB0 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CDE10 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x1405CE13C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405CE5DC (PopFxDeviceRelationsCleanup.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopFxQueueWorkOrder @ 0x1403AA1E0 (PopFxQueueWorkOrder.c)
 *     PopFxArmResidentTimer @ 0x14047E3D0 (PopFxArmResidentTimer.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  LARGE_INTEGER v5; // r8
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v5.QuadPart = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v7 = *(_QWORD *)(v6 + 144);
    v5 = InterruptTimePrecise;
    if ( v7 < InterruptTimePrecise.QuadPart )
    {
      do
      {
        v11 = v7;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5.QuadPart, v7);
        v7 = v12;
        if ( v11 == v12 )
          break;
        _mm_pause();
      }
      while ( v12 < v5.QuadPart );
    }
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 144);
  }
  if ( (*(_DWORD *)(v6 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v6, *(int *)(v6 + 88), 0LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v6 + 88)) == 0x80000000 )
  {
    if ( !v5.QuadPart )
      v5 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v6 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v5.QuadPart - v7 < (unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 96)) == 1 )
      {
        if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
          PopFxArmResidentTimer(0LL);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
    {
      v8 = *(_QWORD *)(v6 + 144);
      while ( v8 < v5.QuadPart )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5.QuadPart, v8);
        if ( v9 == v8 )
          break;
        _mm_pause();
      }
    }
    if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PopFxQueueWorkOrder)(
        v6 + 24,
        BugCheckParameter2,
        (LARGE_INTEGER)v5.QuadPart);
    }
    else
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread(KeGetCurrentThread(), 16, v5.LowPart);
      PopFxIdleWorker(BugCheckParameter2);
      if ( KeGetCurrentIrql() < 2u )
      {
        v14 = 16;
        KiClearSystemPriority(KeGetCurrentThread(), &v14);
      }
    }
  }
}
