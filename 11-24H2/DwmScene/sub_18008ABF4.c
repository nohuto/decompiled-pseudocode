/*
 * XREFs of sub_18008ABF4 @ 0x18008ABF4
 * Callers:
 *     sub_180089F3C @ 0x180089F3C (sub_180089F3C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18008ABF4(__int128 *a1, __int128 *a2)
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
