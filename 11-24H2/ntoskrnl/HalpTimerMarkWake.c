/*
 * XREFs of HalpTimerMarkWake @ 0x1404F71A0
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

int HalpTimerMarkWake()
{
  unsigned __int64 v0; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  if ( !(_DWORD)v0 )
  {
    v0 = __rdtsc();
    HalpTscOnWake = v0;
  }
  return v0;
}
