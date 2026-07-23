/*
 * XREFs of LdrpEnableUMGLTracingStateSync @ 0x18002C434
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 */

__int64 LdrpEnableUMGLTracingStateSync()
{
  signed __int64 Value; // rax
  signed __int64 v1; // rcx
  signed __int64 v2; // rcx
  int v3; // ebx
  PVOID Context; // [rsp+60h] [rbp+8h] BYREF

  Value = RunOnce.Value;
  Context = 0LL;
  if ( ((__int64)RunOnce.Ptr & 3) == 2 )
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
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RunOnce, 1LL, Value);
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
            RtlRunOnceComplete(&RunOnce, 4u, 0LL);
          }
          else
          {
            RtlRunOnceComplete(&RunOnce, 0, Context);
            RtlpEnumProcessHeaps(
              (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSynchronizeHeapLoggingStateCallback,
              0LL,
              4);
          }
          return (unsigned int)v3;
        }
      }
      if ( v1 != 1 )
        break;
      Value = RtlpRunOnceWaitForInit(Value, &RunOnce);
    }
    if ( v1 != 3 )
      return 0;
    return (unsigned int)-1073741584;
  }
}
