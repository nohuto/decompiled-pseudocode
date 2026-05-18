/*
 * XREFs of sub_1800BE920 @ 0x1800BE920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_18002B380 @ 0x18002B380 (sub_18002B380.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800BE920(float *a1, float a2, float a3, float a4, float a5)
{
  double v6; // xmm0_8
  void (__fastcall *v7)(float *, __int64 *); // rbx
  __int64 v8; // rdx
  __int64 v10; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v12[72]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v13; // [rsp+E0h] [rbp+8h] BYREF

  sub_18002867C((__int64)(a1 + 2), (__int64)v12);
  (*(void (__fastcall **)(float *, _BYTE *))(*(_QWORD *)a1 + 320LL))(a1, v11);
  sub_18002B380(a1, a2, a3, a4, a5);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 336LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 104LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 96LL))(a1);
  (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 144LL))(a1);
  (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 80LL))(a1);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18001CAFC(&stru_1801B94E8, 3);
  v6 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  if ( *(float *)&v6 != (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL))(a1);
    (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
    sub_18001CAFC(&stru_1801B94E8, 3);
  }
  (*(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v10);
  v7 = *(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 384LL);
  v13 = v10;
  sub_1800115D0(&v13);
  v7(a1, &v13);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 360LL))(a1, v8);
  sub_18000E954(&v10);
  sub_180029CE0((__int64)v11);
  return sub_180011044((__int64)v12);
}
