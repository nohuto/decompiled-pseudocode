/*
 * XREFs of PspGetFreezeState @ 0x1404BFE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PspGetFreezeState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 136) & 8) != 0;
}
