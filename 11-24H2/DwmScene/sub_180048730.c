/*
 * XREFs of sub_180048730 @ 0x180048730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18007BC30 @ 0x18007BC30 (sub_18007BC30.c)
 */

__int64 __fastcall sub_180048730(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD **)(a1 + 112);
  v4 = *(_QWORD **)(a1 + 104);
  v5 = *(_DWORD *)(*a2 + 244LL);
  while ( v4 != v3 )
  {
    v6 = v4[3];
    if ( v6 )
      sub_18007BC30(v6, v5);
    v7 = v4[5];
    if ( v7 )
      sub_18007BC30(v7, v5);
    v8 = v4[7];
    if ( v8 )
      sub_18007BC30(v8, v5);
    v9 = v4[9];
    if ( v9 )
      sub_18007BC30(v9, v5);
    v4 += 11;
  }
  result = (__int64)unknown_libname_81(v13, a2);
  v11 = *(_QWORD *)(result + 8);
  if ( v11 )
    result = sub_18001060C(v11);
  v12 = a2[1];
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
