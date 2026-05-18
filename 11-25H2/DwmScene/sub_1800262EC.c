/*
 * XREFs of sub_1800262EC @ 0x1800262EC
 * Callers:
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_18006CEF8 @ 0x18006CEF8 (sub_18006CEF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800262EC(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
