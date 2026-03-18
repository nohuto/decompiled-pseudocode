/*
 * XREFs of HalpPmuArbiterUpdateActiveActorTime @ 0x1406F25E4
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

LONGLONG HalpPmuArbiterUpdateActiveActorTime()
{
  __int64 v0; // rbx
  LONGLONG result; // rax
  __int128 v2; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = *((_QWORD *)&xmmword_140FC1650 + 1);
  v2 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v0);
  result = v2 / PerformanceFrequency.QuadPart;
  *(_QWORD *)(xmmword_140FC1650 + 40) += result;
  return result;
}
