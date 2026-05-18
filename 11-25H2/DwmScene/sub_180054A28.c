/*
 * XREFs of sub_180054A28 @ 0x180054A28
 * Callers:
 *     sub_1800556E0 @ 0x1800556E0 (sub_1800556E0.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 */

__int64 *__fastcall sub_180054A28(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8

  v4 = a3;
  for ( i = a2; i != v4; i += 32LL )
  {
    if ( *(_QWORD *)(i + 16) == *(_QWORD *)(a4 + 16) )
    {
      sub_1800130AC(a4);
      v7 = sub_1800130AC(i);
      if ( !(unsigned int)sub_18001E5D4(v7, v8, v9) )
        break;
    }
  }
  *a1 = i;
  return a1;
}
