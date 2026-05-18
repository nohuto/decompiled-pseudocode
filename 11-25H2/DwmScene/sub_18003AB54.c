/*
 * XREFs of sub_18003AB54 @ 0x18003AB54
 * Callers:
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180039C00 @ 0x180039C00 (sub_180039C00.c)
 *     sub_18003AF00 @ 0x18003AF00 (sub_18003AF00.c)
 *     sub_18003B29C @ 0x18003B29C (sub_18003B29C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003AB54(__int64 a1, __int64 *a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  sub_18003BD1C();
  for ( i = *(__int64 **)(a1 + 32); i != *(__int64 **)(a1 + 40); i += 2 )
  {
    if ( *i == *a2 )
      break;
  }
  v5 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    i += 2;
    if ( i == v5 )
      break;
    sub_180011010(i - 2, i);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) - 8LL);
  if ( v6 )
    sub_18001050C(v6);
  *(_QWORD *)(a1 + 40) -= 16LL;
  v7 = *a2;
  sub_18003BCDC(*a2);
  sub_180011B04(v7 + 112, &v11);
  result = (__int64)sub_180039C00(*a2, &v9);
  if ( v11 )
  {
    sub_18003AF00(v11, &v9);
    v13 = 0LL;
    result = sub_18003B29C(*a2, &v13);
  }
  if ( v9 )
  {
    sub_18003B29C(v9, &v11);
    v13 = 0LL;
    result = sub_18003AF00(*a2, &v13);
  }
  if ( v10 )
    result = sub_18001050C(v10);
  if ( v12 )
    return sub_18001050C(v12);
  return result;
}
