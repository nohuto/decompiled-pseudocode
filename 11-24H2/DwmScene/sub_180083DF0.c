/*
 * XREFs of sub_180083DF0 @ 0x180083DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 *     sub_18005E0C8 @ 0x18005E0C8 (sub_18005E0C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180083DF0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_180056950(a1, v4);
  sub_18005E0C8(&v8, a2);
  v5 = v8;
  sub_18001254C((__int64 *)(v8 + 1896), (_QWORD *)(a1 + 1896));
  *(_DWORD *)(v5 + 1940) = *(_DWORD *)(a1 + 1940);
  *(_DWORD *)(v5 + 1944) = *(_DWORD *)(a1 + 1944);
  *(_BYTE *)(v5 + 1952) = *(_BYTE *)(a1 + 1952);
  *(_DWORD *)(v5 + 1948) = *(_DWORD *)(a1 + 1948);
  *(_DWORD *)(v5 + 1956) = *(_DWORD *)(a1 + 1956);
  *(_DWORD *)(v5 + 1964) = *(_DWORD *)(a1 + 1964);
  *(_DWORD *)(v5 + 1960) = *(_DWORD *)(a1 + 1960);
  *(_DWORD *)(v5 + 1968) = *(_DWORD *)(a1 + 1968);
  sub_1800133F4(v5 + 1768, a1 + 1768);
  result = sub_1800133F4(v5 + 1848, a1 + 1848);
  if ( v9 )
    result = sub_18001060C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
