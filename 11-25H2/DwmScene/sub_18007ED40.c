/*
 * XREFs of sub_18007ED40 @ 0x18007ED40
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18007EAD4 @ 0x18007EAD4 (sub_18007EAD4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007ED40(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _BYTE v21[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF
  int v24; // [rsp+B0h] [rbp+40h]

  v24 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v23 = v5;
    result = sub_18004099C(a1 + 128, (__int64)&v23);
    if ( result == *(_QWORD *)(a1 + 128) )
    {
      sub_1800279D0(a1, (__int64)a2);
      v6 = *a2;
      sub_18007EAD4((__int64 *)(v6 + 496), (__int64 *)&v17);
      v24 = 1;
      v7 = (__int64)v17;
      v8 = (_QWORD *)sub_180011C64(v6 + 8, &v19);
      sub_180027B50(v7, v8);
      if ( v20 )
        sub_18001050C(v20);
      v9 = v17;
      v10 = *v17;
      v16 = 0LL;
      v11 = *(_QWORD *)(a1 + 120);
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v16 = *(_OWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, __int128 *))(v10 + 40))(v9, &v16);
      v23 = v5;
      sub_180050140((__int64 *)(a1 + 128), (__int64)v21, &v23);
      v12 = unknown_libname_81(&v19, &v17);
      v13 = *v12;
      *v12 = *(_QWORD *)(v14 + 40);
      *(_QWORD *)(v14 + 40) = v13;
      v15 = v12[1];
      v12[1] = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v14 + 48) = v15;
      if ( v20 )
        sub_18001050C(v20);
      v23 = v5;
      result = sub_18002755C((__int64 *)(a1 + 80), (__int64)v22, &v23);
      *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
      if ( v18 )
        return sub_18001050C(v18);
    }
  }
  return result;
}
