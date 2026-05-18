/*
 * XREFs of sub_18002C378 @ 0x18002C378
 * Callers:
 *     sub_18002F278 @ 0x18002F278 (sub_18002F278.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_18002FA9C @ 0x18002FA9C (sub_18002FA9C.c)
 */

void __fastcall sub_18002C378(__int64 *a1, unsigned __int64 a2, _QWORD **a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r9
  _QWORD *i; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v14 = a2;
    v8 = sub_1800108F8((__int64)a1, &v14);
    *a1 = v8;
    v10 = (_QWORD *)v8;
    a1[1] = v8;
    a1[2] = v8 + 16 * a2;
    v11 = (_QWORD *)*a4;
    for ( i = *a3; i != v11; i = (_QWORD *)(v13 + 16) )
    {
      sub_1800122C8(v9, v10, i);
      v10 += 2;
    }
    sub_180012040((__int64)v10, (__int64)v10);
    v14 = 0LL;
    a1[1] = (__int64)v10;
    sub_18002FA9C(&v14);
  }
}
