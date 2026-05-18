/*
 * XREFs of sub_1800209CC @ 0x1800209CC
 * Callers:
 *     sub_180020C00 @ 0x180020C00 (sub_180020C00.c)
 *     sub_180020D00 @ 0x180020D00 (sub_180020D00.c)
 *     sub_180020E00 @ 0x180020E00 (sub_180020E00.c)
 *     sub_180020F40 @ 0x180020F40 (sub_180020F40.c)
 *     sub_180021200 @ 0x180021200 (sub_180021200.c)
 *     sub_180021350 @ 0x180021350 (sub_180021350.c)
 *     sub_1800215E0 @ 0x1800215E0 (sub_1800215E0.c)
 *     sub_180021900 @ 0x180021900 (sub_180021900.c)
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180021CE0 @ 0x180021CE0 (sub_180021CE0.c)
 *     sub_180021F30 @ 0x180021F30 (sub_180021F30.c)
 *     sub_180022060 @ 0x180022060 (sub_180022060.c)
 *     sub_1800222D0 @ 0x1800222D0 (sub_1800222D0.c)
 *     sub_180022420 @ 0x180022420 (sub_180022420.c)
 *     sub_1800227B0 @ 0x1800227B0 (sub_1800227B0.c)
 *     sub_1800228E0 @ 0x1800228E0 (sub_1800228E0.c)
 *     sub_180022A80 @ 0x180022A80 (sub_180022A80.c)
 *     sub_180022ED0 @ 0x180022ED0 (sub_180022ED0.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 * Callees:
 *     sub_180022E20 @ 0x180022E20 (sub_180022E20.c)
 */

_BYTE *__fastcall sub_1800209CC(_BYTE *a1, volatile signed __int64 *a2)
{
  if ( a2 )
  {
    _InterlockedExchangeAdd64(a2 + 18, 0LL);
    sub_180022E20((void *)a2);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
