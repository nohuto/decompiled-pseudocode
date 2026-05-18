/*
 * XREFs of sub_1800E2BD4 @ 0x1800E2BD4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800D34C4 @ 0x1800D34C4 (sub_1800D34C4.c)
 */

__int64 __fastcall sub_1800E2BD4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_18001CAFC(&stru_1801B9648, 3);
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  sub_1800D34C4(*(_QWORD *)(a2 + 384), a2 + 120, a2 + 80);
  v3 = *(_QWORD *)(a2 + 128);
  if ( v3 )
    sub_18001060C(v3);
  v4 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    sub_18001060C(v4);
  return 0LL;
}
