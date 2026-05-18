/*
 * XREFs of sub_1800264E4 @ 0x1800264E4
 * Callers:
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 *     sub_18002DBA4 @ 0x18002DBA4 (sub_18002DBA4.c)
 *     sub_18002DC94 @ 0x18002DC94 (sub_18002DC94.c)
 *     sub_18004A714 @ 0x18004A714 (sub_18004A714.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800264E4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_18001050C(v3);
  }
  return sub_180026460(a1);
}
