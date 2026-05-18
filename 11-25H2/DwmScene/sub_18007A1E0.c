/*
 * XREFs of sub_18007A1E0 @ 0x18007A1E0
 * Callers:
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_18007A2D4 @ 0x18007A2D4 (sub_18007A2D4.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007A1E0(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4LL;
  if ( v6 == 1 )
    return 16LL;
  return 0LL;
}
