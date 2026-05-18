/*
 * XREFs of sub_180073BD4 @ 0x180073BD4
 * Callers:
 *     sub_180073CC4 @ 0x180073CC4 (sub_180073CC4.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180016644 @ 0x180016644 (sub_180016644.c)
 *     sub_180073E18 @ 0x180073E18 (sub_180073E18.c)
 */

void __fastcall sub_180073BD4(_QWORD *a1, unsigned __int64 a2, const void **a3, _QWORD *a4)
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
    v8 = (char *)sub_180016644((__int64)a1, &v11);
    *a1 = v8;
    v9 = v8;
    a1[1] = v8;
    a1[2] = &v8[8 * a2];
    v10 = *a4 - (_QWORD)*a3;
    memmove(v8, *a3, v10);
    v11 = 0LL;
    a1[1] = &v9[8 * (v10 >> 3)];
    sub_180073E18(&v11);
  }
}
