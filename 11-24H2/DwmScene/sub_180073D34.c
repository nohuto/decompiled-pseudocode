/*
 * XREFs of sub_180073D34 @ 0x180073D34
 * Callers:
 *     sub_180073E24 @ 0x180073E24 (sub_180073E24.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180016744 @ 0x180016744 (sub_180016744.c)
 *     sub_180073F78 @ 0x180073F78 (sub_180073F78.c)
 */

void __fastcall sub_180073D34(_QWORD *a1, unsigned __int64 a2, const void **a3, _QWORD *a4)
{
  char *v8; // rax
  char *v9; // rdi
  signed __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v11 = a2;
    v8 = (char *)sub_180016744((__int64)a1, &v11);
    *a1 = v8;
    v9 = v8;
    a1[1] = v8;
    a1[2] = &v8[8 * a2];
    v10 = *a4 - (_QWORD)*a3;
    memmove(v8, *a3, v10);
    v11 = 0LL;
    a1[1] = &v9[8 * (v10 >> 3)];
    sub_180073F78(&v11);
  }
}
