/*
 * XREFs of sub_1800BE170 @ 0x1800BE170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18002B138 @ 0x18002B138 (sub_18002B138.c)
 *     sub_1800BC1BC @ 0x1800BC1BC (sub_1800BC1BC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BE170(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  double v2; // xmm0_8
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm6_4
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  float v7; // [rsp+28h] [rbp-50h] BYREF
  __int64 v8; // [rsp+2Ch] [rbp-4Ch]
  float v9; // [rsp+34h] [rbp-44h]
  __int64 v10; // [rsp+38h] [rbp-40h]

  sub_18002B138((__int64)a1);
  v2 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[16])(a1);
  v3 = *(float *)&v2 * ((float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[14])(a1);
  v4 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[17])(a1);
  v5 = *(float *)&v4 * ((float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[15])(a1);
  if ( v3 != 0.0 && v5 != 0.0 && a1[57] )
  {
    v6 = 0LL;
    if ( !(unsigned int)sub_1800BC1BC(a1 + 57, &v6) )
    {
      v8 = 0LL;
      v10 = 0LL;
      v7 = 1.0 / v3;
      v9 = 1.0 / v5;
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 272LL))(v6, &v7);
    }
    sub_18000E854(&v6);
  }
}
