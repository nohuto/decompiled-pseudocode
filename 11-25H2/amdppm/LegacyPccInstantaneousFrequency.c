/*
 * XREFs of LegacyPccInstantaneousFrequency @ 0x14000CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyPccInstantaneousFrequency(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 60);
  *a2 = result;
  return result;
}
