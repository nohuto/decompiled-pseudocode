/*
 * XREFs of sub_1800B6108 @ 0x1800B6108
 * Callers:
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B6108(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, _QWORD, __int64, const char *, const char *, int); // rdi
  _QWORD *v11; // rax
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = a6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1) )
  {
    v8 = sub_1800138F8(a6);
    v9 = *a1;
    v10 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, const char *, const char *, int))(*(_QWORD *)*a1 + 40LL);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[2] + 8LL))(a1[2], v13);
    v10(
      v9,
      a5,
      *v11,
      v8,
      "InitializeRenderer",
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\rendererd3d11.cpp",
      a3);
  }
  return sub_180011B5C(a6);
}
