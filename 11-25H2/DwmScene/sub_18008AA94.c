/*
 * XREFs of sub_18008AA94 @ 0x18008AA94
 * Callers:
 *     sub_180089DDC @ 0x180089DDC (sub_180089DDC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18008AA94(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm1

  while ( a1 != a2 )
  {
    if ( a1 == --a2 )
      break;
    v2 = *a1;
    *a1++ = *a2;
    *a2 = v2;
  }
}
