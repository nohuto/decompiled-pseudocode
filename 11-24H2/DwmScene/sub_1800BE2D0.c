/*
 * XREFs of sub_1800BE2D0 @ 0x1800BE2D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18002B298 @ 0x18002B298 (sub_18002B298.c)
 *     sub_1800BC31C @ 0x1800BC31C (sub_1800BC31C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BE2D0(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
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

  sub_18002B298((__int64)a1);
  v2 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[16])(a1);
  v3 = *(float *)&v2 * ((float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[14])(a1);
  v4 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[17])(a1);
  v5 = *(float *)&v4 * ((float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[15])(a1);
  if ( v3 != 0.0 && v5 != 0.0 && a1[57] )
  {
    v6 = 0LL;
    if ( !(unsigned int)sub_1800BC31C(a1 + 57, &v6) )
    {
      v8 = 0LL;
      v10 = 0LL;
      v7 = 1.0 / v3;
      v9 = 1.0 / v5;
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 272LL))(v6, &v7);
    }
    sub_18000E954(&v6);
  }
}
