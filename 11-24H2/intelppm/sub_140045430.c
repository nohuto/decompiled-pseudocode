/*
 * XREFs of sub_140045430 @ 0x140045430
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003460 @ 0x140003460 (sub_140003460.c)
 */

__int64 __fastcall sub_140045430(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r10
  _QWORD *v4; // r11
  __int64 result; // rax

  if ( a2 >= 5 )
    return 3221225485LL;
  v2 = sub_140003460(a1, a2);
  result = 0LL;
  if ( !*(_BYTE *)v2 )
    return 3221225659LL;
  *v3 = *(_QWORD *)(v2 + 8);
  *v4 = *(_QWORD *)(v2 + 32);
  return result;
}
