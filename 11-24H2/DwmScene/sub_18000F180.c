/*
 * XREFs of sub_18000F180 @ 0x18000F180
 * Callers:
 *     sub_18000D448 @ 0x18000D448 (sub_18000D448.c)
 *     sub_18000F254 @ 0x18000F254 (sub_18000F254.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F180(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}
