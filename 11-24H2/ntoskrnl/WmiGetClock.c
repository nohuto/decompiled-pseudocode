/*
 * XREFs of WmiGetClock @ 0x14064DC90
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 WmiGetClock()
{
  int v0; // edx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  result = 0LL;
  if ( !v0 )
  {
    v7 = BYTE1(Flink[281].Blink) - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return RtlGetSystemTimePrecise().QuadPart;
      if ( v8 == 1 )
        return __rdtsc();
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v3 = v0 - 1;
  if ( !v3 )
    return RtlGetSystemTimePrecise().QuadPart;
  v4 = v3 - 1;
  if ( !v4 )
    return KeQueryPerformanceCounter(0LL).QuadPart;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return RtlGetSystemTimePrecise().QuadPart;
      return __rdtsc();
    }
  }
  return result;
}
