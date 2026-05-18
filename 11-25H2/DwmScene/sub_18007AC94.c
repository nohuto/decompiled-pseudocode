/*
 * XREFs of sub_18007AC94 @ 0x18007AC94
 * Callers:
 *     sub_18007B29C @ 0x18007B29C (sub_18007B29C.c)
 * Callees:
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 *     sub_18007AF10 @ 0x18007AF10 (sub_18007AF10.c)
 *     sub_18007B2DC @ 0x18007B2DC (sub_18007B2DC.c)
 *     sub_18007C9B4 @ 0x18007C9B4 (sub_18007C9B4.c)
 */

__int64 __fastcall sub_18007AC94(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 i; // rbp
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3) )
  {
    sub_18007C9B4(a1, a3);
    v7 = *a1;
LABEL_11:
    result = sub_18007AF10(a2, v5, v7);
    i = result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((v7 - v3) >> 3);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_18007B2DC(v3, a2);
      v7 = a1[1];
      v3 += 40LL;
      a2 += 40LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 40 * v5; v5; --v5 )
  {
    sub_18007B2DC(v3, a2);
    v3 += 40LL;
    a2 += 40LL;
  }
  result = sub_1800785B8(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return result;
}
