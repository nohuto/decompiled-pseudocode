/*
 * XREFs of sub_18001BA80 @ 0x18001BA80
 * Callers:
 *     sub_18001BCFC @ 0x18001BCFC (sub_18001BCFC.c)
 *     sub_18002CFD8 @ 0x18002CFD8 (sub_18002CFD8.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_18002E0F8 @ 0x18002E0F8 (sub_18002E0F8.c)
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 *     sub_18004A558 @ 0x18004A558 (sub_18004A558.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004AA58 @ 0x18004AA58 (sub_18004AA58.c)
 *     sub_18004AB4C @ 0x18004AB4C (sub_18004AB4C.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_18004C624 @ 0x18004C624 (sub_18004C624.c)
 *     sub_18004C678 @ 0x18004C678 (sub_18004C678.c)
 *     sub_18004D690 @ 0x18004D690 (sub_18004D690.c)
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 */

bool __fastcall sub_18001BA80(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    sub_1800138F8(a2 + 32);
    v4 = sub_1800138F8(v3);
    return (int)sub_18001BCAC(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48)) >= 0;
  }
  return v2;
}
