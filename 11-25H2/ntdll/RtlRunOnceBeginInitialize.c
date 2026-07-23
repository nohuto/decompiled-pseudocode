/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18008E110
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18000322C (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180120780 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148A8C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014CD24 (RtlpHpPerHeapStackTraceCleanup.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  signed __int64 Value; // rax
  NTSTATUS result; // eax
  ULONG v7; // ebx
  signed __int64 v8; // rcx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_5:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  else if ( (Flags & 1) != 0 )
  {
    return -1073741823;
  }
  else
  {
    v7 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v9 = 1LL;
        if ( v7 )
          v9 = 3LL;
        v10 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, Value);
        if ( v10 == Value )
          return 259;
      }
      if ( v8 != 1 )
        break;
      if ( v7 )
        return -1073741584;
      Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)RunOnce);
    }
    if ( v8 != 3 )
      goto LABEL_5;
    result = 259;
    if ( !v7 )
      return -1073741584;
  }
  return result;
}
