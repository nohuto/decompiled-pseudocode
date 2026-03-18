/*
 * XREFs of PsGetProcessActiveThreadCount @ 0x1404D7EC0
 * Callers:
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessActiveThreadCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 896);
}
