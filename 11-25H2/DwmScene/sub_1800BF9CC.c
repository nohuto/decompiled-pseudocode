/*
 * XREFs of sub_1800BF9CC @ 0x1800BF9CC
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_18007D17C @ 0x18007D17C (sub_18007D17C.c)
 *     sub_1800C24F8 @ 0x1800C24F8 (sub_1800C24F8.c)
 */

_OWORD *__fastcall sub_1800BF9CC(const void **a1, _BYTE *a2, _OWORD *a3)
{
  __int64 v3; // rbx
  signed __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _OWORD *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  void *v16; // rax
  _BYTE *v17; // r8
  void *v18; // rcx
  _BYTE *v19; // rdx
  size_t v20; // r8
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v22 = v3;
  v12 = sub_1800108F8(v10, &v22);
  v13 = (_OWORD *)(v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v14 = v12;
  sub_18007D17C(v15, v13, a3);
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  if ( a2 == v17 )
  {
    v20 = v17 - v19;
  }
  else
  {
    memmove(v16, v19, a2 - (_BYTE *)*a1);
    v18 = v13 + 1;
    v20 = (_BYTE *)a1[1] - a2;
    v19 = a2;
  }
  memmove(v18, v19, v20);
  sub_1800C24F8(a1, v14, v9, v3);
  return v13;
}
