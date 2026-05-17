/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18003A720
 * Callers:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180097BBC (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011EEB0 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x1801474DC (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014B774 (RtlpHpPerHeapStackTraceCleanup.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  __int64 result; // rax
  int v7; // ebx
  signed __int64 v8; // rcx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_6:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0LL;
  }
  else if ( (a2 & 1) != 0 )
  {
    return 3221225473LL;
  }
  else
  {
    v7 = a2 & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v5 & 3;
        if ( (v5 & 3) != 0 )
          break;
        v9 = 1LL;
        if ( v7 )
          v9 = 3LL;
        v10 = v5;
        v5 = _InterlockedCompareExchange64(a1, v9, v5);
        if ( v10 == v5 )
          return 259LL;
      }
      if ( v8 != 1 )
        break;
      if ( v7 )
        return 3221225712LL;
      v5 = RtlpRunOnceWaitForInit(v5, a1);
    }
    if ( v8 != 3 )
      goto LABEL_6;
    result = 259LL;
    if ( !v7 )
      return 3221225712LL;
  }
  return result;
}
