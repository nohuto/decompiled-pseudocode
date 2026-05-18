/*
 * XREFs of sub_1800BD964 @ 0x1800BD964
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_180011600 @ 0x180011600 (sub_180011600.c)
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800BCE50 @ 0x1800BCE50 (sub_1800BCE50.c)
 *     sub_1800BCF80 @ 0x1800BCF80 (sub_1800BCF80.c)
 *     sub_1800BD280 @ 0x1800BD280 (sub_1800BD280.c)
 *     sub_1800BD610 @ 0x1800BD610 (sub_1800BD610.c)
 *     sub_1800BD7C0 @ 0x1800BD7C0 (sub_1800BD7C0.c)
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 *     sub_1800BE3F0 @ 0x1800BE3F0 (sub_1800BE3F0.c)
 *     sub_1800BE7A0 @ 0x1800BE7A0 (sub_1800BE7A0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800BC67C @ 0x1800BC67C (sub_1800BC67C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800BD964(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v7);
  sub_180011C04(v3, &v5);
  if ( v8 )
    sub_180010644(v8);
  if ( v5 )
  {
    sub_1800BC67C(a2, &v5);
    if ( v6 )
      sub_18001060C(v6);
  }
  else
  {
    if ( v6 )
      sub_18001060C(v6);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
