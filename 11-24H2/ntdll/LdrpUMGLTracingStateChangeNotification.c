/*
 * XREFs of LdrpUMGLTracingStateChangeNotification @ 0x18015F000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 */

__int64 LdrpUMGLTracingStateChangeNotification()
{
  RtlpEnumProcessHeaps(
    (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSynchronizeHeapLoggingStateCallback,
    0LL,
    4);
  return 0LL;
}
