/*
 * XREFs of sub_180024FD0 @ 0x180024FD0
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_1800258AC @ 0x1800258AC (sub_1800258AC.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180024FD0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *v5; // rax
  __int64 *i; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rcx
  __int64 result; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800258AC(a1, v12);
  sub_18002867C(a1 + 24, v11);
  v5 = *(__int64 **)(a1 + 256);
  for ( i = *(__int64 **)(a1 + 248); i != v5 && *i != v3; i += 2 )
    ;
  if ( i != v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_180096260(*v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v8 = *(__int64 **)(a1 + 256);
    while ( 1 )
    {
      i += 2;
      if ( i == v8 )
        break;
      sub_180011110(i - 2, i);
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 256) - 8LL);
    if ( v9 )
      sub_18001060C(v9);
    *(_QWORD *)(a1 + 256) -= 16LL;
  }
  sub_180011044((__int64)v11);
  result = sub_180011044((__int64)v12);
  if ( v4 )
    return sub_18001060C(v4);
  return result;
}
