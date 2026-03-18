/*
 * XREFs of NtDeleteWnfStateData @ 0x1407B03B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 */

__int64 __fastcall NtDeleteWnfStateData(void *a1, __int64 a2)
{
  return ExpNtDeleteWnfStateData(a1, a2, 1);
}
