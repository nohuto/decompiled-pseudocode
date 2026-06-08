/*
 * XREFs of CpcConnectNativeInterrupt @ 0x14002D0E0
 * Callers:
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

void __fastcall CpcConnectNativeInterrupt(struct _DEVICE_OBJECT **DeferredContext)
{
  struct _DEVICE_OBJECT *v1; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  int v5; // edx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v1 = DeferredContext[31];
  v3 = *DeferredContext;
  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  WorkItem = IoAllocateWorkItem(v3);
  v1[3].DeviceObjectExtension = (_DEVOBJ_EXTENSION *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc((PRKDPC)&v1[3].Dpc.SystemArgument2, (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc, DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)&v1[3].Dpc.SystemArgument2, &ProcNumber);
    KeSetImportanceDpc((PRKDPC)&v1[3].Dpc.SystemArgument2, MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(struct _DEVICE_OBJECT **))qword_1400193D8)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.CurrentIrp) = 1;
      ((void (*)(void))qword_1400193F0)();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      4,
      20,
      (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
