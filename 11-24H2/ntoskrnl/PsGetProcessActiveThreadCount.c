/*
 * XREFs of PsGetProcessActiveThreadCount @ 0x1404C0FE0
 * Callers:
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessActiveThreadCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 896);
}
