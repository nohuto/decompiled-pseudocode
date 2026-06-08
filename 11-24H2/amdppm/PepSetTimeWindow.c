/*
 * XREFs of PepSetTimeWindow @ 0x14000D510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepSetTimeWindow(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 60) = a2;
}
