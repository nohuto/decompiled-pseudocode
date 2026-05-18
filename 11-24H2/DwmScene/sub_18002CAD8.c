/*
 * XREFs of sub_18002CAD8 @ 0x18002CAD8
 * Callers:
 *     sub_180033E74 @ 0x180033E74 (sub_180033E74.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180010D7C @ 0x180010D7C (sub_180010D7C.c)
 *     sub_180011920 @ 0x180011920 (sub_180011920.c)
 *     sub_18001195C @ 0x18001195C (sub_18001195C.c)
 *     sub_18002E5A0 @ 0x18002E5A0 (sub_18002E5A0.c)
 */

unsigned __int64 __fastcall sub_18002CAD8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v17 = sub_180011920(a1, v6 + 1);
  v10 = sub_1800109F8(v9, &v17);
  v11 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v11 + v10;
  sub_18002E5A0(v11, v11 + v10, a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180010D7C(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_180010D7C(v15, v13, v14);
  sub_18001195C((__int64)a1, v10, v8, v17);
  return v12;
}
