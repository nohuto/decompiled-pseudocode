/*
 * XREFs of RIMIDEGetQpcBasedTouchStackTime @ 0x1401E6274
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1401E62C4 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     <none>
 */

__int64 RIMIDEGetQpcBasedTouchStackTime()
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return 10000 * (unsigned int)(PerformanceCounter.QuadPart / gliQpcFreq.QuadPart)
       + (unsigned int)((unsigned __int64)(10000 * (PerformanceCounter.QuadPart % gliQpcFreq.QuadPart))
                      / gliQpcFreq.QuadPart);
}
