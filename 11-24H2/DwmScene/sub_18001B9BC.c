/*
 * XREFs of sub_18001B9BC @ 0x18001B9BC
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

__int64 **__fastcall sub_18001B9BC(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *a2 = v6;
    sub_1800138F8(a3);
    v7 = sub_1800138F8((__int64)(v6 + 4));
    if ( (int)sub_18001BCAC(v7, v6[6], v8, *(_QWORD *)(a3 + 16)) >= 0 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
  }
  return a2;
}
