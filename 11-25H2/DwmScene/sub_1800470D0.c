/*
 * XREFs of sub_1800470D0 @ 0x1800470D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

__int64 __fastcall sub_1800470D0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = unknown_libname_81(&v8, a2);
  sub_180078350(a1, v4);
  sub_180013F04(&v8, a2);
  v5 = *(_QWORD *)(a1 + 104);
  result = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(result + 104) = v5;
  if ( v9 )
    result = sub_18001050C(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
