/*
 * XREFs of PsGetProcessActiveThreadCount @ 0x1404C7B80
 * Callers:
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessActiveThreadCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 896);
}
