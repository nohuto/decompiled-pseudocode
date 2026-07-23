/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC
 * Callers:
 *     LdrpEnableUMGLTracingStateSync @ 0x18002C434 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpFcStartSubscriptionManager @ 0x18002CB4C (RtlpFcStartSubscriptionManager.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x18002DFB0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F0FA0 (RtlWaitForWnfMetaNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180107FC0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpCtContextInit @ 0x180145D94 (RtlpCtContextInit.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001A9A0 (RtlRunOnceBeginInitialize.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18002E484 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfUserSubscription @ 0x18002E7D4 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18002EAC0 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18002EC70 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        PVOID *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 *SerializationGroup; // r14
  int WnfUserSubscription; // edi
  NTSTATUS v15; // eax
  NTSTATUS v16; // esi
  PVOID v17; // rbx
  __int64 v18; // rcx
  PVOID v19; // rdx
  PVOID v20; // rax
  NTSTATUS v22; // eax
  char v23[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF

  v25 = 0LL;
  BaseAddress = 0LL;
  SerializationGroup = 0LL;
  if ( byte_1801D1908 )
    return (unsigned int)-1073741558;
  v15 = RtlRunOnceBeginInitialize(&stru_1801CD1F8, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    v23[0] = 0;
    goto LABEL_21;
  }
  if ( v15 != 259 )
    goto LABEL_5;
  if ( (unsigned int)RtlpInitializeWnf(&stru_1801CD1F8, 0LL, 0LL) )
  {
    v16 = RtlRunOnceComplete(&stru_1801CD1F8, 0, 0LL);
    if ( v16 >= 0 )
    {
      v16 = 0;
      goto LABEL_5;
    }
    v23[0] = 1;
LABEL_21:
    RtlReportCriticalFailure(v16, (__int64)v23, 1);
    goto LABEL_5;
  }
  v16 = -1073741823;
  v22 = RtlRunOnceComplete(&stru_1801CD1F8, 4u, 0LL);
  if ( v22 < 0 )
  {
    v16 = v22;
    v23[0] = 2;
    goto LABEL_21;
  }
LABEL_5:
  WnfUserSubscription = v16;
  if ( v16 >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup(a7)) != 0LL )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription(
                              (unsigned int)&BaseAddress,
                              a3,
                              a4,
                              a5,
                              (__int64)SerializationGroup,
                              a8,
                              a9);
      if ( WnfUserSubscription < 0
        || (SerializationGroup = 0LL,
            WnfUserSubscription = RtlpCreateWnfNameSubscription(&v25, a2, a6),
            WnfUserSubscription < 0) )
      {
        v20 = BaseAddress;
      }
      else
      {
        v17 = BaseAddress;
        v18 = v25;
        v19 = BaseAddress;
        *a1 = BaseAddress;
        WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v18, v19);
        if ( WnfUserSubscription < 0 )
        {
          *a1 = 0LL;
          RtlUnsubscribeWnfNotificationWaitForCompletion(v17);
        }
        v20 = 0LL;
        BaseAddress = 0LL;
      }
      if ( v20 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      if ( SerializationGroup )
        RtlpDecrementWnfSerializationGroup(SerializationGroup);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)WnfUserSubscription;
}
