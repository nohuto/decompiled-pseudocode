/*
 * XREFs of sub_18004F1D8 @ 0x18004F1D8
 * Callers:
 *     sub_18004F02C @ 0x18004F02C (sub_18004F02C.c)
 *     sub_1800CF434 @ 0x1800CF434 (sub_1800CF434.c)
 *     sub_1800D1774 @ 0x1800D1774 (sub_1800D1774.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 */

__int64 __fastcall sub_18004F1D8(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    sub_180012408(v3 + 40, a2);
  return sub_18001C184(a1);
}
