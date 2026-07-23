/*
 * XREFs of PsIsThreadImpersonating @ 0x140A3BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1440) & 8) != 0;
}
