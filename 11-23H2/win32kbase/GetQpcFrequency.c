/*
 * XREFs of GetQpcFrequency @ 0x1C013877C
 * Callers:
 *     EtwTraceFlipManagerPresentCanceled @ 0x1C01398A0 (EtwTraceFlipManagerPresentCanceled.c)
 *     EtwTraceFlipManagerPresentDeferred @ 0x1C0139BB0 (EtwTraceFlipManagerPresentDeferred.c)
 *     EtwTraceFlipManagerPresentPosted @ 0x1C0139F30 (EtwTraceFlipManagerPresentPosted.c)
 *     EtwTraceFlipManagerPresentProcessed @ 0x1C013A140 (EtwTraceFlipManagerPresentProcessed.c)
 *     EtwTraceFlipManagerPresentSkipped @ 0x1C013A490 (EtwTraceFlipManagerPresentSkipped.c)
 * Callees:
 *     <none>
 */

__int64 GetQpcFrequency()
{
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = qword_1C0297518;
  if ( !qword_1C0297518 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedCompareExchange64(&qword_1C0297518, PerformanceFrequency.QuadPart, 0LL);
    return qword_1C0297518;
  }
  return result;
}
