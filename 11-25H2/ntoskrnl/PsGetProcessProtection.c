/*
 * XREFs of PsGetProcessProtection @ 0x14048B900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 1530);
}
