/*
 * XREFs of sub_18001575C @ 0x18001575C
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800150CC @ 0x1800150CC (sub_1800150CC.c)
 *     sub_1800173FC @ 0x1800173FC (sub_1800173FC.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_1800B863C @ 0x1800B863C (sub_1800B863C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18001575C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = sub_18001B1F8(4264LL);
  if ( v8 )
  {
    v9 = unknown_libname_81(&v15, (_QWORD *)(a1 + 464));
    v8 = sub_1800B863C(v10, a1, v9);
  }
  sub_1800150CC(v14, v8);
  v11 = v14[0];
  sub_18002863C(v14[0] + 24LL, v17);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 240LL))(v11, a3, a4);
  unknown_libname_81(&v15, v14);
  sub_180031270(a1, &v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_18001060C(*((__int64 *)&v15 + 1));
  v15 = 0LL;
  v12 = unknown_libname_81(&v16, v14);
  sub_1800331D0(a1, 7LL, v12, &v15);
  *a2 = v11;
  a2[1] = v14[1];
  sub_180011044((__int64)v17);
  sub_1800173FC(a3);
  return a2;
}
