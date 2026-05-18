/*
 * XREFs of sub_180047778 @ 0x180047778
 * Callers:
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800475E4 @ 0x1800475E4 (sub_1800475E4.c)
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 *     sub_1800478D8 @ 0x1800478D8 (sub_1800478D8.c)
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_180049BE0 @ 0x180049BE0 (sub_180049BE0.c)
 */

unsigned __int64 __fastcall sub_180047778(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 i; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = a3;
  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector too long");
  v5 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3);
  v16 = sub_180049BE0();
  v6 = v16;
  v8 = sub_1800475E4(v7, (unsigned __int64 *)&v16);
  sub_1800478D8(v8 + 88 * v5, a2 - v5);
  v10 = a1[1];
  v11 = v8;
  for ( i = *a1; i != v10; i = v14 + 88 )
  {
    sub_1800479C8(v9, v11);
    v11 = v13 + 88;
  }
  sub_180047740(v11, v11);
  if ( *a1 )
  {
    sub_180047740(*a1, a1[1]);
    sub_180010234((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v8;
  a1[1] = v8 + 88 * a2;
  result = v8 + 88 * v6;
  a1[2] = result;
  return result;
}
