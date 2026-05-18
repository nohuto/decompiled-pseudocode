/*
 * XREFs of sub_180013120 @ 0x180013120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011F00 @ 0x180011F00 (sub_180011F00.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180013120(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = (__int64)sub_180011F00(*a2, &v7);
  if ( v7 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 == *(_QWORD **)(v4 + 16) )
    {
      result = sub_180012180(*(__int64 **)(a1 + 8), *(_QWORD *)(v4 + 8), (__int64)&v7);
    }
    else
    {
      result = (__int64)j_unknown_libname_81(v5, &v7);
      *(_QWORD *)(v6 + 8) += 16LL;
    }
  }
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
