/*
 * XREFs of LdrpEnableUMGLTracingStateSync @ 0x180002C54
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 */

__int64 LdrpEnableUMGLTracingStateSync()
{
  signed __int64 Value; // rax
  signed __int64 v1; // rcx
  signed __int64 v2; // rcx
  int v3; // ebx
  PVOID Context; // [rsp+60h] [rbp+8h] BYREF

  Value = stru_1801D4460.Value;
  Context = 0LL;
  if ( ((__int64)stru_1801D4460.Ptr & 3) == 2 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v2 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801D4460, 1LL, Value);
        if ( Value == v2 )
        {
          v3 = RtlpSubscribeWnfStateChangeNotificationInternal(
                 (unsigned int)&Context,
                 WNF_ETW_UMGL_TRACING_CHANGE,
                 0,
                 (unsigned int)LdrpUMGLTracingStateChangeNotification,
                 0LL,
                 0LL,
                 0,
                 4,
                 17);
          if ( v3 < 0 )
          {
            RtlRunOnceComplete(&stru_1801D4460, 4u, 0LL);
          }
          else
          {
            RtlRunOnceComplete(&stru_1801D4460, 0, Context);
            RtlpEnumProcessHeaps(RtlpSynchronizeHeapLoggingStateCallback, 0LL, 4LL);
          }
          return (unsigned int)v3;
        }
      }
      if ( v1 != 1 )
        break;
      Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)&stru_1801D4460);
    }
    if ( v1 != 3 )
      return 0;
    return (unsigned int)-1073741584;
  }
}
