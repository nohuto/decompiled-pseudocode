/*
 * XREFs of PopFxIdleComponent @ 0x1403B4888
 * Callers:
 *     PopFxDeactivateComponentDependencies @ 0x14027B544 (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x140375B78 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403B4720 (PopFxResidentTimeoutRoutine.c)
 *     PoFxIdleComponent @ 0x1403B4850 (PoFxIdleComponent.c)
 *     PoFxAddComponentRelation @ 0x1405CFDE0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405D0490 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405D06F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x1405D0A1C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405D0EBC (PopFxDeviceRelationsCleanup.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 * Callees:
 *     PopFxQueueWorkOrder @ 0x14029F720 (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     PopFxArmResidentTimer @ 0x140483290 (PopFxArmResidentTimer.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v13);
    v7 = *(_QWORD *)(v6 + 144);
    v5 = InterruptTimePrecise;
    if ( v7 < InterruptTimePrecise )
    {
      do
      {
        v11 = v7;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5, v7);
        v7 = v12;
        if ( v11 == v12 )
          break;
        _mm_pause();
      }
      while ( v12 < v5 );
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
    if ( !v5 )
      v5 = RtlGetInterruptTimePrecise(v13);
    if ( (*(_DWORD *)(v6 + 92) & 2) == 0 && !PopFxLowPowerEpoch && v5 - v7 < (unsigned int)PopFxActiveIdleThreshold )
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
      while ( v8 < v5 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5, v8);
        if ( v9 == v8 )
          break;
        _mm_pause();
      }
    }
    if ( (a3 & 2) != 0 )
    {
      PopFxQueueWorkOrder(v6 + 24, BugCheckParameter2);
    }
    else
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, v5);
      PopFxIdleWorker(BugCheckParameter2);
      if ( KeGetCurrentIrql() < 2u )
      {
        v14 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v14);
      }
    }
  }
}
