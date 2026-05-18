/*
 * XREFs of sub_1800BD804 @ 0x1800BD804
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_180011500 @ 0x180011500 (sub_180011500.c)
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800BCCF0 @ 0x1800BCCF0 (sub_1800BCCF0.c)
 *     sub_1800BCE20 @ 0x1800BCE20 (sub_1800BCE20.c)
 *     sub_1800BD120 @ 0x1800BD120 (sub_1800BD120.c)
 *     sub_1800BD4B0 @ 0x1800BD4B0 (sub_1800BD4B0.c)
 *     sub_1800BD660 @ 0x1800BD660 (sub_1800BD660.c)
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 *     sub_1800BE290 @ 0x1800BE290 (sub_1800BE290.c)
 *     sub_1800BE640 @ 0x1800BE640 (sub_1800BE640.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800BC51C @ 0x1800BC51C (sub_1800BC51C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800BD804(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v7);
  sub_180011B04(v3, &v5);
  if ( v8 )
    sub_180010544(v8);
  if ( v5 )
  {
    sub_1800BC51C(a2, &v5);
    if ( v6 )
      sub_18001050C(v6);
  }
  else
  {
    if ( v6 )
      sub_18001050C(v6);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
