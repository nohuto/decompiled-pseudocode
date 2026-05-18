/*
 * XREFs of sub_18000F154 @ 0x18000F154
 * Callers:
 *     sub_18000D3D4 @ 0x18000D3D4 (sub_18000D3D4.c)
 *     sub_18000F254 @ 0x18000F254 (sub_18000F254.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F154(__int64 a1)
{
  __int64 v3; // rcx

  if ( !a1 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  return v3 + 1;
}
