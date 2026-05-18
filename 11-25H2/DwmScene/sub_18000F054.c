/*
 * XREFs of sub_18000F054 @ 0x18000F054
 * Callers:
 *     sub_18000D2EC @ 0x18000D2EC (sub_18000D2EC.c)
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_18000F2AC @ 0x18000F2AC (sub_18000F2AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F054(__int64 a1)
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
