/*
 * XREFs of sub_180039518 @ 0x180039518
 * Callers:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180013BCC @ 0x180013BCC (sub_180013BCC.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_18002BB54 @ 0x18002BB54 (sub_18002BB54.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18005C6E4 @ 0x18005C6E4 (sub_18005C6E4.c)
 *     sub_18005C804 @ 0x18005C804 (sub_18005C804.c)
 *     sub_18005C924 @ 0x18005C924 (sub_18005C924.c)
 *     sub_18005CA44 @ 0x18005CA44 (sub_18005CA44.c)
 *     sub_18005CB64 @ 0x18005CB64 (sub_18005CB64.c)
 *     sub_18006A3AC @ 0x18006A3AC (sub_18006A3AC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180038280 @ 0x180038280 (sub_180038280.c)
 *     sub_18003B8EC @ 0x18003B8EC (sub_18003B8EC.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180039518(__int64 a1, _QWORD *a2)
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

  sub_18003BE7C();
  unknown_libname_81(&v18, a2);
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = unknown_libname_81(v21, v4);
    v7 = *v6;
    v8 = v6[1];
    if ( v8 )
      sub_18001060C(v8);
    if ( v18 == v7 )
      break;
    v4 += 2;
  }
  if ( v19 )
    sub_18001060C(v19);
  v9 = *(_QWORD **)(a1 + 384);
  if ( v4 != v9 )
    return 0;
  if ( v9 == *(_QWORD **)(a1 + 392) )
  {
    sub_180038280((__int64 *)(a1 + 376), *(_QWORD *)(a1 + 384), a2);
  }
  else
  {
    j_unknown_libname_81(v9, a2);
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_18003B8EC(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    sub_180034808(v10, &v22);
    v11 = 0;
    v12 = v22;
    if ( (v23 - v22) >> 4 )
    {
      v13 = 0LL;
      do
      {
        unknown_libname_81(&v18, (_QWORD *)(v12 + 16 * v13));
        sub_18002867C(v18 + 24, (__int64)v21);
        v14 = unknown_libname_81(&v20, &v18);
        v15(v16, v14);
        sub_180011044((__int64)v21);
        if ( v19 )
          sub_18001060C(v19);
        ++v11;
        v12 = v22;
        v13 = v11;
      }
      while ( v11 < (unsigned __int64)((v23 - v22) >> 4) );
    }
    sub_1800131E0((__int64)&v22);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
