/*
 * XREFs of sub_180039344 @ 0x180039344
 * Callers:
 *     sub_1800653C4 @ 0x1800653C4 (sub_1800653C4.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 *     sub_18007D8CC @ 0x18007D8CC (sub_18007D8CC.c)
 *     sub_18008BD40 @ 0x18008BD40 (sub_18008BD40.c)
 *     sub_180092B80 @ 0x180092B80 (sub_180092B80.c)
 *     sub_180092BB0 @ 0x180092BB0 (sub_180092BB0.c)
 *     sub_180092EE8 @ 0x180092EE8 (sub_180092EE8.c)
 *     sub_180092FF0 @ 0x180092FF0 (sub_180092FF0.c)
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

_QWORD *__fastcall sub_180039344(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v4 = a2[1];
  *a1 = *a2;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_18001060C(v5);
  return a1;
}
