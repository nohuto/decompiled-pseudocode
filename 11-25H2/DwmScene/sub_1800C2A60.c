/*
 * XREFs of sub_1800C2A60 @ 0x1800C2A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BEBEC @ 0x1800BEBEC (sub_1800BEBEC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall sub_1800C2A60(__int64 *a1, __int64 a2)
{
  __int64 **v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  char v7; // al
  __int64 *v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, __int64 *); // rdi
  __int64 (__fastcall *v12)(__int64 *, _QWORD, __int64 *); // rdi
  int v13; // ebx
  __int64 v14; // rax
  const char *v15; // rax
  __int64 *v16; // rdi
  int (__fastcall *v17)(__int64 *, void *, __int64 *); // rbx
  __int64 v18[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  _BYTE v23[32]; // [rsp+50h] [rbp-30h] BYREF

  if ( !sub_1800371F0(a1, a2) )
  {
    sub_18001C99C(&stru_1801B8548, 3);
    return 0;
  }
  v4 = (__int64 **)(a1 + 18);
  if ( !a1[18] )
  {
    sub_180011B04((__int64)(a1 + 9), &v21);
    v5 = unknown_libname_81(v18, &v21);
    sub_1800BEBEC(&v19, v5);
    sub_1800B9A04(v19, v18);
    v6 = (__int64 *)v18[0];
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 304LL))(v18[0]);
    v8 = a1 + 18;
    v9 = (v7 & 1) == 0;
    v10 = *v6;
    if ( v9 )
    {
      v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 352);
      sub_18000E854(v8);
      v13 = v12(v6, 0LL, a1 + 18);
      sub_1800BB198(v19, v13);
      if ( v13 < 0 )
      {
        sub_18001C99C(&stru_1801B8548, 3);
        sub_18000E854(v18);
        if ( v20 )
          sub_18001050C(v20);
        if ( v22 )
          sub_18001050C(v22);
        return 0;
      }
      v14 = sub_180027A8C((__int64)a1, (__int64)v23);
      v15 = (const char *)sub_1800137F8(v14);
      sub_180011424(*v4, v15);
      sub_180011A5C((__int64)v23);
    }
    else
    {
      v11 = *(void (__fastcall **)(__int64 *, __int64 *))(v10 + 344);
      sub_18000E854(v8);
      v11(v6, a1 + 18);
    }
    sub_18000E854(v18);
    if ( v20 )
      sub_18001050C(v20);
    if ( v22 )
      sub_18001050C(v22);
  }
  if ( a1[19] )
    return 1;
  v16 = *v4;
  v17 = *(int (__fastcall **)(__int64 *, void *, __int64 *))**v4;
  sub_18000E854(a1 + 19);
  return v17(v16, &unk_18018AEC8, a1 + 19) >= 0;
}
