/*
 * XREFs of PpmUtilityComparer @ 0x14046F4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUtilityComparer(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 > *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 < *a2;
}
