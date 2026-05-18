/*
 * XREFs of sub_180068130 @ 0x180068130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_180023824 @ 0x180023824 (sub_180023824.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 */

void *__fastcall sub_180068130(__int64 a1, __int64 *a2)
{
  void *result; // rax
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = sub_180023824(*a2, &v7);
  if ( v7 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 == *(_QWORD **)(v4 + 16) )
    {
      result = sub_18005283C(*(__int64 **)(a1 + 8), *(_QWORD *)(v4 + 8), &v7);
    }
    else
    {
      result = j_unknown_libname_81(v5, &v7);
      *(_QWORD *)(v6 + 8) += 16LL;
    }
  }
  if ( v8 )
    return (void *)sub_18001060C(v8);
  return result;
}
