/*
 * XREFs of sub_180067FD0 @ 0x180067FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_1800236C4 @ 0x1800236C4 (sub_1800236C4.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 */

void *__fastcall sub_180067FD0(__int64 a1, __int64 *a2)
{
  void *result; // rax
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = sub_1800236C4(*a2, &v7);
  if ( v7 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 == *(_QWORD **)(v4 + 16) )
    {
      result = sub_1800526DC(*(__int64 **)(a1 + 8), *(_QWORD *)(v4 + 8), &v7);
    }
    else
    {
      result = j_unknown_libname_81(v5, &v7);
      *(_QWORD *)(v6 + 8) += 16LL;
    }
  }
  if ( v8 )
    return (void *)sub_18001050C(v8);
  return result;
}
