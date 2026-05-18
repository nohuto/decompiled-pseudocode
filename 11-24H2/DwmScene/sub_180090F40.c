/*
 * XREFs of sub_180090F40 @ 0x180090F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_180090F40(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
