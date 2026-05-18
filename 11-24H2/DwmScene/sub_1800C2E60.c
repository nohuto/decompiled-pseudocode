/*
 * XREFs of sub_1800C2E60 @ 0x1800C2E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BC61C @ 0x1800BC61C (sub_1800BC61C.c)
 *     sub_1800C26C8 @ 0x1800C26C8 (sub_1800C26C8.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C2E60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 **); // rdi
  int v7; // ebx
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  const char *v11; // rax
  __int64 *v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800BC61C(&v16, a2);
    sub_1800C3044(v16, &v13);
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v13 + 912LL);
    sub_18000E954((__int64 *)&v12);
    v7 = v6(v5, 0LL, &v12);
    sub_180011C04(a1 + 72, &v18);
    sub_1800C26C8(&v14, &v18);
    if ( v19 )
      sub_18001060C(v19);
    v8 = v7;
    v9 = v14;
    sub_1800BB2F8(v14, v8);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = sub_180027BEC(*a2, (__int64)&v18);
      v11 = (const char *)sub_1800138F8(v10);
      sub_180011524(v12, v11);
      sub_180011B5C((__int64)&v18);
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v12,
        0LL);
    }
    if ( v15 )
      sub_18001060C(v15);
    sub_18000E954((__int64 *)&v12);
    result = sub_18000E954(&v13);
    if ( v17 )
      return sub_18001060C(v17);
  }
  return result;
}
