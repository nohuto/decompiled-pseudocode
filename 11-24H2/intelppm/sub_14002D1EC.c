/*
 * XREFs of sub_14002D1EC @ 0x14002D1EC
 * Callers:
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14002D1EC(struct _DEVICE_OBJECT **DeferredContext)
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
  v1[3].DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc((PRKDPC)&v1[3].Dpc.SystemArgument2, (PKDEFERRED_ROUTINE)DeferredRoutine, DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)&v1[3].Dpc.SystemArgument2, &ProcNumber);
    KeSetImportanceDpc((PRKDPC)&v1[3].Dpc.SystemArgument2, MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(struct _DEVICE_OBJECT **))qword_1400193A8)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.CurrentIrp) = 1;
      ((void (*)(void))qword_1400193C0)();
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v5) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v5, 4, 20, (__int64)&unk_140014550);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
