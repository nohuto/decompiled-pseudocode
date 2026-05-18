/*
 * XREFs of sub_1800544FC @ 0x1800544FC
 * Callers:
 *     sub_180054A18 @ 0x180054A18 (sub_180054A18.c)
 *     sub_180054A5C @ 0x180054A5C (sub_180054A5C.c)
 *     sub_1800552C8 @ 0x1800552C8 (sub_1800552C8.c)
 *     sub_180055328 @ 0x180055328 (sub_180055328.c)
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 *     sub_180059CB4 @ 0x180059CB4 (sub_180059CB4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800544FC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( v4 )
        result = sub_18001060C(v4);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
