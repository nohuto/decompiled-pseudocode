/*
 * XREFs of sub_1800405B0 @ 0x1800405B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800122DC @ 0x1800122DC (sub_1800122DC.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800405B0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_180078350(a1, v4);
  sub_1800122DC(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(v5 + 124) = *(_BYTE *)(a1 + 124);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 112);
  result = *(unsigned int *)(a1 + 108);
  *(_DWORD *)(v5 + 108) = result;
  if ( v9 )
    result = sub_18001050C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
