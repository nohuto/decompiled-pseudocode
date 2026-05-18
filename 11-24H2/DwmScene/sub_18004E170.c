/*
 * XREFs of sub_18004E170 @ 0x18004E170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180016C44 @ 0x180016C44 (sub_180016C44.c)
 *     sub_18004DD44 @ 0x18004DD44 (sub_18004DD44.c)
 *     sub_18004DE4C @ 0x18004DE4C (sub_18004DE4C.c)
 *     sub_18004E604 @ 0x18004E604 (sub_18004E604.c)
 *     sub_1800784B0 @ 0x1800784B0 (sub_1800784B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004E170(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_1800784B0(a1, v4);
  sub_180016C44(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  sub_18004DD44((_DWORD *)(v5 + 108), (_DWORD *)(a1 + 108));
  sub_18004DE4C((_DWORD *)(v5 + 256), (_DWORD *)(a1 + 256));
  sub_18001254C((__int64 *)(v5 + 432), (_QWORD *)(a1 + 432));
  sub_18001254C((__int64 *)(v5 + 448), (_QWORD *)(a1 + 448));
  sub_18001254C((__int64 *)(v5 + 512), (_QWORD *)(a1 + 512));
  *(_DWORD *)(v5 + 528) = *(_DWORD *)(a1 + 528);
  result = sub_18004E604(v5);
  if ( v9 )
    result = sub_18001060C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
