/*
 * XREFs of sub_18002644C @ 0x18002644C
 * Callers:
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_18006D058 @ 0x18006D058 (sub_18006D058.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002644C(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
