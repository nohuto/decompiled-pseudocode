/*
 * XREFs of sub_180037978 @ 0x180037978
 * Callers:
 *     sub_180038AC4 @ 0x180038AC4 (sub_180038AC4.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 * Callees:
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     sub_18001B258 @ 0x18001B258 (sub_18001B258.c)
 */

_QWORD *__fastcall sub_180037978(_QWORD *a1, unsigned __int64 a2)
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
        v4 = sub_18001B224(16 * v2);
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
    sub_18001B258(v4);
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
