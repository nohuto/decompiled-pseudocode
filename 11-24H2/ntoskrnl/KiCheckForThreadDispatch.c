/*
 * XREFs of KiCheckForThreadDispatch @ 0x14031D21C
 * Callers:
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x1403385A4 (KiFastReadyThread.c)
 *     KeSetPriorityBoost @ 0x140338750 (KeSetPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(struct _KPRCB *a1, __int64 a2)
{
  _KTHREAD *NextThread; // rax
  unsigned __int64 v4; // rbp
  _KTHREAD *CurrentThread; // rsi
  bool v6; // zf
  _KTHREAD *v7; // rbx
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // r8
  int v11; // edx
  char v12; // r9
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+24h] [rbp-24h]
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

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
            v9 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
            v11 = *(_DWORD *)(v10 + 168);
            v12 = v9;
            *(_DWORD *)(v10 + 168) = v11 | 4;
            if ( !v11 )
              __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
            if ( v12 )
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
      KiAbProcessPreContextSwitch(&a1->CurrentThread->Header.Lock, 0);
      KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, &v16);
      v7 = a1->NextThread;
      a1->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, CurrentThread);
      KiUpdatePriorityMatrixForRunningTransition(a1, (__int64)v7);
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v4;
      KiQueueReadyThread(a1, (__int64)&v16, (ULONG_PTR)CurrentThread);
      LOBYTE(v8) = v4;
      LOBYTE(v7) = KiSwapContext(CurrentThread, v7, v8);
      LOBYTE(NextThread) = KiAbProcessPostContextSwitch((__int64)CurrentThread);
      v6 = (_BYTE)v7 == 0;
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
