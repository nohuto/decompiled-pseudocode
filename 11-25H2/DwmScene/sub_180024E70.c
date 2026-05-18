/*
 * XREFs of sub_180024E70 @ 0x180024E70
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18002574C @ 0x18002574C (sub_18002574C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180024E70(__int64 a1, __int64 *a2)
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
  sub_18002574C(a1, v12);
  sub_18002851C(a1 + 24, v11);
  v5 = *(__int64 **)(a1 + 256);
  for ( i = *(__int64 **)(a1 + 248); i != v5 && *i != v3; i += 2 )
    ;
  if ( i != v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_180096100(*v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v8 = *(__int64 **)(a1 + 256);
    while ( 1 )
    {
      i += 2;
      if ( i == v8 )
        break;
      sub_180011010(i - 2, i);
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 256) - 8LL);
    if ( v9 )
      sub_18001050C(v9);
    *(_QWORD *)(a1 + 256) -= 16LL;
  }
  sub_180010F44((__int64)v11);
  result = sub_180010F44((__int64)v12);
  if ( v4 )
    return sub_18001050C(v4);
  return result;
}
