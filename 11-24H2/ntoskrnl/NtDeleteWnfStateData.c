/*
 * XREFs of NtDeleteWnfStateData @ 0x1407BFB80
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 */

__int64 __fastcall NtDeleteWnfStateData(void *a1, __int64 a2)
{
  return ExpNtDeleteWnfStateData(a1, a2, 1);
}
