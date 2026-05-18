/*
 * XREFs of sub_180024730 @ 0x180024730
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_1800D6446 @ 0x1800D6446 (sub_1800D6446.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180024730(_QWORD *a1)
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
    result = sub_18001060C(v2);
  v4 = a1[10];
  if ( v4 )
    result = sub_18001060C(v4);
  v5 = a1[8];
  if ( v5 )
    result = sub_18001060C(v5);
  v6 = a1[5];
  if ( v6 )
    result = sub_18001060C(v6);
  v7 = a1[3];
  if ( v7 )
    result = sub_18001060C(v7);
  v8 = a1[1];
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
