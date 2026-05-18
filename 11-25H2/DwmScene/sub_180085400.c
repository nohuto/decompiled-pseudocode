/*
 * XREFs of sub_180085400 @ 0x180085400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001DFF8 @ 0x18001DFF8 (sub_18001DFF8.c)
 *     sub_18005DF00 @ 0x18005DF00 (sub_18005DF00.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085400(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_180078350(a1, v4);
  sub_18005DF00(&v8, a2);
  v5 = v8;
  *(_BYTE *)(v8 + 88) = *(_BYTE *)(a1 + 88);
  sub_18001244C((__int64 *)(v5 + 96), (_QWORD *)(a1 + 96));
  sub_18001DFF8((__int64 *)(v5 + 112), a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  result = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(v5 + 152) = result;
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  if ( v9 )
    result = sub_18001050C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
