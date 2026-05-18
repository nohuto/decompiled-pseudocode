/*
 * XREFs of sub_1800571D0 @ 0x1800571D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 */

__int64 __fastcall sub_1800571D0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_1800588FC(a1, &v7);
    v7 = 0LL;
    sub_180058790(a1, &v7);
  }
  v8 = *(_DWORD *)(*a2 + 244LL);
  sub_180050B40((__int64 *)(a1 + 448), &v8);
  result = (__int64)unknown_libname_81(&v7, a2);
  v5 = *(_QWORD *)(result + 8);
  if ( v5 )
    result = sub_18001050C(v5);
  v6 = a2[1];
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
