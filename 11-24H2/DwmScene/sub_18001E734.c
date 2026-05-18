/*
 * XREFs of sub_18001E734 @ 0x18001E734
 * Callers:
 *     sub_18001DDB0 @ 0x18001DDB0 (sub_18001DDB0.c)
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 *     sub_1800541D0 @ 0x1800541D0 (sub_1800541D0.c)
 *     sub_180054B88 @ 0x180054B88 (sub_180054B88.c)
 *     sub_18005C69C @ 0x18005C69C (sub_18005C69C.c)
 *     sub_18005ED5C @ 0x18005ED5C (sub_18005ED5C.c)
 *     sub_18005EEEC @ 0x18005EEEC (sub_18005EEEC.c)
 *     sub_18005F050 @ 0x18005F050 (sub_18005F050.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800CDEEC @ 0x1800CDEEC (sub_1800CDEEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E734(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx

  result = 0LL;
  v4 = a1 - (_QWORD)a2;
  while ( a3 )
  {
    v5 = *(unsigned __int16 *)((char *)a2 + v4);
    if ( v5 != *a2 )
      return v5 < *a2 ? -1 : 1;
    --a3;
    ++a2;
  }
  return result;
}
