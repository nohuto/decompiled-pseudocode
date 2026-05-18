/*
 * XREFs of sub_1800245D0 @ 0x1800245D0
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_1800D62E6 @ 0x1800D62E6 (sub_1800D62E6.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800245D0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a1[12];
  if ( v2 )
    result = sub_18001050C(v2);
  v4 = a1[10];
  if ( v4 )
    result = sub_18001050C(v4);
  v5 = a1[8];
  if ( v5 )
    result = sub_18001050C(v5);
  v6 = a1[5];
  if ( v6 )
    result = sub_18001050C(v6);
  v7 = a1[3];
  if ( v7 )
    result = sub_18001050C(v7);
  v8 = a1[1];
  if ( v8 )
    return sub_18001050C(v8);
  return result;
}
