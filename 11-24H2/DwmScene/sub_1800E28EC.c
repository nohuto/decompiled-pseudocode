/*
 * XREFs of sub_1800E28EC @ 0x1800E28EC
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800D3484 @ 0x1800D3484 (sub_1800D3484.c)
 */

__int64 __fastcall sub_1800E28EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  sub_1800138F8(*(_QWORD *)(a2 + 80) + 16LL);
  sub_18001CAFC(&stru_1801B9648, 3);
  *(_OWORD *)(a2 + 64) = 0LL;
  sub_1800D3484(*(_QWORD *)(a2 + 240), a2 + 64);
  v3 = *(_QWORD *)(a2 + 72);
  if ( v3 )
    sub_18001060C(v3);
  return 0LL;
}
