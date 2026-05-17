/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC
 * Callers:
 *     LdrpEnableUMGLTracingStateSync @ 0x1800975E4 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpFcStartSubscriptionManager @ 0x180097CFC (RtlpFcStartSubscriptionManager.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x180099160 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F6A40 (RtlWaitForWnfMetaNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x18010D000 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpCtContextInit @ 0x1801479E4 (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRunOnceBeginInitialize @ 0x18003A720 (RtlRunOnceBeginInitialize.c)
 *     RtlpCreateSerializationGroup @ 0x180097970 (RtlpCreateSerializationGroup.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180099634 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfUserSubscription @ 0x180099984 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180099C70 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180099E20 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlpInitializeWnf @ 0x1800F73B8 (RtlpInitializeWnf.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // r14
  int WnfUserSubscription; // edi
  int v15; // eax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  int v25; // eax
  char v26[8]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_1801D2908 )
    return (unsigned int)-1073741558;
  v15 = RtlRunOnceBeginInitialize(&qword_1801CE1F8, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    v26[0] = 0;
    goto LABEL_21;
  }
  if ( v15 != 259 )
    goto LABEL_5;
  if ( (unsigned int)RtlpInitializeWnf(&qword_1801CE1F8, 0LL, 0LL) )
  {
    v16 = RtlRunOnceComplete(&qword_1801CE1F8, 0, 0LL);
    if ( v16 >= 0 )
    {
      v16 = 0;
      goto LABEL_5;
    }
    v26[0] = 1;
LABEL_21:
    RtlReportCriticalFailure(v16, (__int64)v26, 1);
    goto LABEL_5;
  }
  v16 = -1073741823;
  v25 = RtlRunOnceComplete(&qword_1801CE1F8, 4u, 0LL);
  if ( v25 < 0 )
  {
    v16 = v25;
    v26[0] = 2;
    goto LABEL_21;
  }
LABEL_5:
  WnfUserSubscription = v16;
  if ( v16 >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup(a7)) != 0 )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v27, a3, a4, a5, SerializationGroup, a8, a9);
      if ( WnfUserSubscription < 0
        || (SerializationGroup = 0LL,
            WnfUserSubscription = RtlpCreateWnfNameSubscription(&v28, a2, a6),
            WnfUserSubscription < 0) )
      {
        v23 = v27;
      }
      else
      {
        v20 = v27;
        v21 = v28;
        v22 = v27;
        *a1 = v27;
        WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v21, v22);
        if ( WnfUserSubscription < 0 )
        {
          *a1 = 0LL;
          RtlUnsubscribeWnfNotificationWaitForCompletion(v20);
        }
        v23 = 0LL;
        v27 = 0LL;
      }
      if ( v23 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
      if ( SerializationGroup )
        RtlpDecrementWnfSerializationGroup(SerializationGroup, v17, v18, v19);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)WnfUserSubscription;
}
