/*
 * XREFs of sub_1800393B8 @ 0x1800393B8
 * Callers:
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_18002B9F4 @ 0x18002B9F4 (sub_18002B9F4.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 *     sub_18005C6A4 @ 0x18005C6A4 (sub_18005C6A4.c)
 *     sub_18005C7C4 @ 0x18005C7C4 (sub_18005C7C4.c)
 *     sub_18005C8E4 @ 0x18005C8E4 (sub_18005C8E4.c)
 *     sub_18005CA04 @ 0x18005CA04 (sub_18005CA04.c)
 *     sub_18006A24C @ 0x18006A24C (sub_18006A24C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180038120 @ 0x180038120 (sub_180038120.c)
 *     sub_18003B78C @ 0x18003B78C (sub_18003B78C.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800393B8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  __int64 *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  void (__fastcall *v15)(__int64, _QWORD *); // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]

  sub_18003BD1C();
  unknown_libname_81(&v18, a2);
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = unknown_libname_81(v21, v4);
    v7 = *v6;
    v8 = v6[1];
    if ( v8 )
      sub_18001050C(v8);
    if ( v18 == v7 )
      break;
    v4 += 2;
  }
  if ( v19 )
    sub_18001050C(v19);
  v9 = *(_QWORD **)(a1 + 384);
  if ( v4 != v9 )
    return 0;
  if ( v9 == *(_QWORD **)(a1 + 392) )
  {
    sub_180038120((__int64 *)(a1 + 376), *(_QWORD *)(a1 + 384), a2);
  }
  else
  {
    j_unknown_libname_81(v9, a2);
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_18003B78C(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    sub_1800346A8(v10, &v22);
    v11 = 0;
    v12 = v22;
    if ( (v23 - v22) >> 4 )
    {
      v13 = 0LL;
      do
      {
        unknown_libname_81(&v18, (_QWORD *)(v12 + 16 * v13));
        sub_18002851C(v18 + 24, (__int64)v21);
        v14 = unknown_libname_81(&v20, &v18);
        v15(v16, v14);
        sub_180010F44((__int64)v21);
        if ( v19 )
          sub_18001050C(v19);
        ++v11;
        v12 = v22;
        v13 = v11;
      }
      while ( v11 < (unsigned __int64)((v23 - v22) >> 4) );
    }
    sub_1800130E0((__int64)&v22);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
