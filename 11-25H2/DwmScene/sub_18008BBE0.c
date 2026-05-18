/*
 * XREFs of sub_18008BBE0 @ 0x18008BBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_18005DE98 @ 0x18005DE98 (sub_18005DE98.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

__int64 __fastcall sub_18008BBE0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_180078350(a1, v4);
  sub_18005DE98(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 132) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  sub_1800391E4((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  *(_DWORD *)(v5 + 140) = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(v5 + 144) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(v5 + 148) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(v5 + 136) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(v5 + 152) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  result = *(unsigned int *)(a1 + 164);
  *(_DWORD *)(v5 + 164) = result;
  if ( v9 )
    result = sub_18001050C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
