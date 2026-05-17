/*
 * XREFs of LdrpEnableUMGLTracingStateSync @ 0x1800975E4
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 */

__int64 LdrpEnableUMGLTracingStateSync()
{
  signed __int64 v0; // rax
  signed __int64 v1; // rcx
  signed __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v0 = qword_1801D2410;
  v5 = 0LL;
  if ( (qword_1801D2410 & 3) == 2 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = v0 & 3;
        if ( (v0 & 3) != 0 )
          break;
        v2 = v0;
        v0 = _InterlockedCompareExchange64(&qword_1801D2410, 1LL, v0);
        if ( v0 == v2 )
        {
          v3 = RtlpSubscribeWnfStateChangeNotificationInternal(
                 (unsigned int)&v5,
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
            RtlRunOnceComplete(&qword_1801D2410, 4LL, 0LL);
          }
          else
          {
            RtlRunOnceComplete(&qword_1801D2410, 0LL, v5);
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
      v0 = RtlpRunOnceWaitForInit(v0, &qword_1801D2410);
    }
    if ( v1 != 3 )
      return 0;
    return (unsigned int)-1073741584;
  }
}
