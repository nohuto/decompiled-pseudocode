/*
 * XREFs of sub_1800480C0 @ 0x1800480C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800480C0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[7]; // [rsp+50h] [rbp-38h] BYREF

  v5 = unknown_libname_81(v19, a2)[1];
  if ( v5 )
    sub_18001060C(v5);
  sub_18002894C(*a2 + 24LL, v4);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 104);
  result = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v7) >> 3);
  if ( result )
  {
    v9 = 0LL;
    do
    {
      if ( *(_QWORD *)(v9 + v7 + 40) )
      {
        v10 = unknown_libname_81(v19, a2);
        sub_18007B850(v11, v10);
      }
      if ( *(_QWORD *)(v9 + v7 + 24) )
      {
        v12 = unknown_libname_81(&v20, a2);
        sub_18007B850(v13, v12);
      }
      if ( *(_QWORD *)(v9 + v7 + 56) )
      {
        v14 = unknown_libname_81(&v21, a2);
        sub_18007B850(v15, v14);
      }
      if ( *(_QWORD *)(v9 + v7 + 72) )
      {
        v16 = unknown_libname_81(v22, a2);
        sub_18007B850(v17, v16);
      }
      ++v6;
      v9 += 88LL;
      v7 = *(_QWORD *)(a1 + 104);
      result = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v7) >> 3);
    }
    while ( v6 < result );
  }
  v18 = a2[1];
  if ( v18 )
    return sub_18001060C(v18);
  return result;
}
