/*
 * XREFs of WmiGetClock @ 0x14064F590
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER WmiGetClock()
{
  int v0; // edx
  struct _LIST_ENTRY *Flink; // rcx
  LARGE_INTEGER result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  result.QuadPart = 0LL;
  if ( !v0 )
  {
    v7 = BYTE1(Flink[281].Blink) - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return (LARGE_INTEGER)RtlGetSystemTimePrecise();
      if ( v8 == 1 )
        return (LARGE_INTEGER)__rdtsc();
    }
    return KeQueryPerformanceCounter(0LL);
  }
  v3 = v0 - 1;
  if ( !v3 )
    return (LARGE_INTEGER)RtlGetSystemTimePrecise();
  v4 = v3 - 1;
  if ( !v4 )
    return KeQueryPerformanceCounter(0LL);
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return (LARGE_INTEGER)RtlGetSystemTimePrecise();
      return (LARGE_INTEGER)__rdtsc();
    }
  }
  return result;
}
