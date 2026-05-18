/*
 * XREFs of sub_180047D80 @ 0x180047D80
 * Callers:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180047D80(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = a1[10];
  if ( v2 )
    result = sub_18001060C(v2);
  v4 = a1[8];
  if ( v4 )
    result = sub_18001060C(v4);
  v5 = a1[6];
  if ( v5 )
    result = sub_18001060C(v5);
  v6 = a1[4];
  if ( v6 )
    result = sub_18001060C(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
