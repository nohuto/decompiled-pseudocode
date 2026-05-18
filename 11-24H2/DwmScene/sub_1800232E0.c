/*
 * XREFs of sub_1800232E0 @ 0x1800232E0
 * Callers:
 *     sub_180020370 @ 0x180020370 (sub_180020370.c)
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
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800232E0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return o__aligned_free(result);
  return result;
}
