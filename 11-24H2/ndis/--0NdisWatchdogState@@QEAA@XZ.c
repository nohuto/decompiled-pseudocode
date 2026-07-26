/*
 * XREFs of ??0NdisWatchdogState@@QEAA@XZ @ 0x140153400
 * Callers:
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1401532C0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 * Callees:
 *     <none>
 */

NdisWatchdogState *__fastcall NdisWatchdogState::NdisWatchdogState(char *DeferredContext)
{
  _QWORD *SystemArgument2; // rcx
  void ***v3; // rax

  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_DWORD *)DeferredContext + 48) = 0;
  *(_OWORD *)(DeferredContext + 200) = 0LL;
  *(_OWORD *)(DeferredContext + 216) = 0LL;
  *(_OWORD *)(DeferredContext + 232) = 0LL;
  *(_OWORD *)(DeferredContext + 248) = 0LL;
  DeferredContext[264] = 0;
  KeInitializeDpc((PRKDPC)DeferredContext, (PKDEFERRED_ROUTINE)ndisWatchdogTimeoutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 1);
  *((_QWORD *)DeferredContext + 19) = DeferredContext;
  *((_QWORD *)DeferredContext + 18) = ndisWatchdogTimeoutWorkerRoutine;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 7, NotificationEvent, 1u);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v3 = (void ***)(DeferredContext + 272);
  if ( *(_DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
    __fastfail(3u);
  *v3 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  *((_QWORD *)DeferredContext + 35) = SystemArgument2;
  *SystemArgument2 = v3;
  WPP_MAIN_CB.Dpc.SystemArgument2 = DeferredContext + 272;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
  KeLeaveCriticalRegion();
  return (NdisWatchdogState *)DeferredContext;
}
