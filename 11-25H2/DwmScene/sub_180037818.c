/*
 * XREFs of sub_180037818 @ 0x180037818
 * Callers:
 *     sub_180038964 @ 0x180038964 (sub_180038964.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 *     sub_18008AAC0 @ 0x18008AAC0 (sub_18008AAC0.c)
 *     sub_18008AB8C @ 0x18008AB8C (sub_18008AB8C.c)
 * Callees:
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     sub_18001B0F8 @ 0x18001B0F8 (sub_18001B0F8.c)
 */

_QWORD *__fastcall sub_180037818(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx

  v2 = a2;
  if ( a2 > 0x100 )
  {
    if ( a2 == 0x7FFFFFFFFFFFFFFFLL )
      v2 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v2 <= 0xFFFFFFFFFFFFFFFLL )
    {
      while ( v2 > 0 )
      {
        v4 = sub_18001B0C4(16 * v2);
        if ( v4 )
        {
          if ( (unsigned __int64)v2 <= 0x100 )
            goto LABEL_12;
          goto LABEL_13;
        }
        v2 /= 2LL;
      }
    }
    v4 = 0LL;
LABEL_12:
    sub_18001B0F8(v4);
    v4 = a1 + 2;
    v2 = 256LL;
  }
  else
  {
    v4 = a1 + 2;
  }
LABEL_13:
  *a1 = v4;
  a1[1] = v2;
  return a1;
}
