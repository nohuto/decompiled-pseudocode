/*
 * XREFs of KiCheckForThreadDispatch @ 0x140285CEC
 * Callers:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x1402F12A8 (KiFastReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityBoost @ 0x140326970 (KeSetPriorityBoost.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B3360 (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(struct _KPRCB *a1, __int64 a2)
{
  _KTHREAD *NextThread; // rax
  unsigned __int64 v4; // rbp
  _KTHREAD *CurrentThread; // rsi
  bool v6; // zf
  char v7; // al
  __int64 v8; // r8
  int v9; // edx
  char v10; // r9
  _KTHREAD *v11; // rbx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+24h] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  NextThread = a1->NextThread;
  v4 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= 2u )
  {
    if ( NextThread )
    {
      LOBYTE(NextThread) = a1->DpcRoutineActive;
      if ( !(_BYTE)NextThread )
      {
        if ( a1->NestingLevel )
        {
          a1->InterruptRequest = 1;
        }
        else
        {
          v15 = 0LL;
          if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
          {
            v7 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
            v9 = *(_DWORD *)(v8 + 168);
            v10 = v7;
            *(_DWORD *)(v8 + 168) = v9 | 4;
            if ( !v9 )
              __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
            if ( v10 )
              _enable();
          }
          v14 = 5;
          LOBYTE(NextThread) = HalpInterruptSendIpi(&v14, 47LL);
        }
      }
    }
  }
  else
  {
    CurrentThread = a1->CurrentThread;
    if ( NextThread )
    {
      KiAbProcessPreContextSwitch(a1->CurrentThread, 0LL);
      KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, &v16);
      v11 = a1->NextThread;
      a1->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, CurrentThread);
      KiUpdatePriorityMatrixForRunningTransition(a1, v11);
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v4;
      KiQueueReadyThread(a1);
      LOBYTE(v12) = v4;
      LOBYTE(v11) = KiSwapContext(CurrentThread, v11, v12);
      LOBYTE(NextThread) = KiAbProcessPostContextSwitch(CurrentThread);
      v6 = (_BYTE)v11 == 0;
    }
    else
    {
      LODWORD(NextThread) = CurrentThread->MiscFlags;
      v6 = ((unsigned __int8)NextThread & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      LOBYTE(NextThread) = KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = v4;
      LOBYTE(NextThread) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(v4);
  }
  return (char)NextThread;
}
