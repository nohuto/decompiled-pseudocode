/*
 * XREFs of LdrpUMGLTracingStateChangeNotification @ 0x18015D3C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 */

__int64 LdrpUMGLTracingStateChangeNotification()
{
  RtlpEnumProcessHeaps(
    (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSynchronizeHeapLoggingStateCallback,
    0LL,
    4);
  return 0LL;
}
