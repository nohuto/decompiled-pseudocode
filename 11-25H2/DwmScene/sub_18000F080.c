/*
 * XREFs of sub_18000F080 @ 0x18000F080
 * Callers:
 *     sub_18000D360 @ 0x18000D360 (sub_18000D360.c)
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_18000F2AC @ 0x18000F2AC (sub_18000F2AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F080(__int64 a1)
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
