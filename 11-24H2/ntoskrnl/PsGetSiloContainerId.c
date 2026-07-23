/*
 * XREFs of PsGetSiloContainerId @ 0x140A9F5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContainerId(__int64 a1)
{
  return (a1 + 1472) & -(__int64)(a1 != 0);
}
