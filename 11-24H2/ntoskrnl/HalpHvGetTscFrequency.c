/*
 * XREFs of HalpHvGetTscFrequency @ 0x1405482D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x140548444 (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetTscFrequency(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10

  if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, a3, a4) )
    return __readmsr(0x40000022u);
  return v4;
}
