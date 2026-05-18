/*
 * XREFs of sub_18005439C @ 0x18005439C
 * Callers:
 *     sub_1800548B8 @ 0x1800548B8 (sub_1800548B8.c)
 *     sub_1800548FC @ 0x1800548FC (sub_1800548FC.c)
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 *     sub_1800551C8 @ 0x1800551C8 (sub_1800551C8.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 *     sub_180059B54 @ 0x180059B54 (sub_180059B54.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18005439C(__int64 a1, __int64 a2)
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
        result = sub_18001050C(v4);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
