/*
 * XREFs of HalpPmuArbiterUpdateActiveActorTime @ 0x1406FC014
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LONGLONG HalpPmuArbiterUpdateActiveActorTime()
{
  __int64 v0; // rbx
  LONGLONG result; // rax
  __int128 v2; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = *((_QWORD *)&xmmword_140FC2050 + 1);
  v2 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v0);
  result = v2 / PerformanceFrequency.QuadPart;
  *(_QWORD *)(xmmword_140FC2050 + 40) += result;
  return result;
}
