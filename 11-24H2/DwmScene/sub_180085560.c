/*
 * XREFs of sub_180085560 @ 0x180085560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18001E158 @ 0x18001E158 (sub_18001E158.c)
 *     sub_18005E060 @ 0x18005E060 (sub_18005E060.c)
 *     sub_1800784B0 @ 0x1800784B0 (sub_1800784B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085560(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_1800784B0(a1, v4);
  sub_18005E060(&v8, a2);
  v5 = v8;
  *(_BYTE *)(v8 + 88) = *(_BYTE *)(a1 + 88);
  sub_18001254C((__int64 *)(v5 + 96), (_QWORD *)(a1 + 96));
  sub_18001E158((__int64 *)(v5 + 112), a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  result = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(v5 + 152) = result;
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  if ( v9 )
    result = sub_18001060C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
