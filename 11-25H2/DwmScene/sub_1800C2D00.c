/*
 * XREFs of sub_1800C2D00 @ 0x1800C2D00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BC4BC @ 0x1800BC4BC (sub_1800BC4BC.c)
 *     sub_1800C2568 @ 0x1800C2568 (sub_1800C2568.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C2D00(__int64 a1, __int64 *a2)
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
    sub_1800BC4BC(&v16, a2);
    sub_1800C2EE4(v16, &v13);
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v13 + 912LL);
    sub_18000E854((__int64 *)&v12);
    v7 = v6(v5, 0LL, &v12);
    sub_180011B04(a1 + 72, &v18);
    sub_1800C2568(&v14, &v18);
    if ( v19 )
      sub_18001050C(v19);
    v8 = v7;
    v9 = v14;
    sub_1800BB198(v14, v8);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = sub_180027A8C(*a2, (__int64)&v18);
      v11 = (const char *)sub_1800137F8(v10);
      sub_180011424(v12, v11);
      sub_180011A5C((__int64)&v18);
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v12,
        0LL);
    }
    if ( v15 )
      sub_18001050C(v15);
    sub_18000E854((__int64 *)&v12);
    result = sub_18000E854(&v13);
    if ( v17 )
      return sub_18001050C(v17);
  }
  return result;
}
