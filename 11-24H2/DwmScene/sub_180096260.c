/*
 * XREFs of sub_180096260 @ 0x180096260
 * Callers:
 *     sub_180024FD0 @ 0x180024FD0 (sub_180024FD0.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18001BEE4 @ 0x18001BEE4 (sub_18001BEE4.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 *     sub_180095498 @ 0x180095498 (sub_180095498.c)
 *     sub_1800955C8 @ 0x1800955C8 (sub_1800955C8.c)
 *     sub_18009662C @ 0x18009662C (sub_18009662C.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096260(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v11[136]; // [rsp+50h] [rbp-79h] BYREF
  void *v12[9]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+130h] [rbp+67h] BYREF
  __int64 v14; // [rsp+140h] [rbp+77h] BYREF
  __int64 v15; // [rsp+148h] [rbp+7Fh]

  v15 = a1;
  sub_18002811C(a1);
  v14 = 500LL;
  sub_180011C8C(&v13);
  sub_180029BC0((__int64)v11);
  v2 = 0;
  v3 = **(_QWORD **)(a1 + 48);
LABEL_2:
  while ( v3 != *(_QWORD *)(a1 + 48) && !v2 )
  {
    while ( 1 )
    {
      sub_180011C8C(&v8);
      v4 = sub_180095498((__int64)v9, (__int64)&v14);
      if ( *v5 - v13 >= *v4 )
        break;
      if ( (unsigned int)sub_180097BD0(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v3 + 32) + 4LL)), v11) == 3 )
      {
        sub_1800955C8(a1 + 8, (__int64 *)(v3 + 32));
        v3 = *(_QWORD *)sub_18009662C(a1 + 48, v10, v3);
        goto LABEL_2;
      }
      Thrd_yield();
    }
    sub_18001CAFC(&stru_1801B9488, 4);
    v2 = 1;
  }
  v6 = sub_180011C8C(&v14);
  v13 = *v6 - v13;
  sub_18001BEE4(&v14, &v13);
  sub_18001CAFC(&stru_1801B9488, 2);
  sub_1800291FC(v12, (__int64)v12);
  return sub_1800282BC(a1);
}
