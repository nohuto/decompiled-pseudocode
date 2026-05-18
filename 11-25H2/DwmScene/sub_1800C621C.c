/*
 * XREFs of sub_1800C621C @ 0x1800C621C
 * Callers:
 *     sub_1800C6A94 @ 0x1800C6A94 (sub_1800C6A94.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_18001D678 @ 0x18001D678 (sub_18001D678.c)
 *     sub_180052648 @ 0x180052648 (sub_180052648.c)
 *     sub_1800C639C @ 0x1800C639C (sub_1800C639C.c)
 */

unsigned __int64 __fastcall sub_1800C621C(const void **a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  void *v16; // rax
  _BYTE *v17; // r8
  void *v18; // rcx
  _BYTE *v19; // rdx
  size_t v20; // r8
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v22 = v3;
  v12 = sub_18001D678(v10, &v22);
  v13 = v12 + (v4 & 0xFFFFFFFFFFFFFFE0uLL);
  v14 = v12;
  v16 = (void *)sub_1800C639C(v15, v13, a3);
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
    v18 = (void *)(v13 + 32);
    v20 = (_BYTE *)a1[1] - a2;
    v19 = a2;
  }
  memmove(v18, v19, v20);
  sub_180052648((__int64)a1, v14, v9, v3);
  return v13;
}
