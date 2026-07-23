/*
 * XREFs of AuthzBasepFindSystemSecurityAttribute @ 0x1409F0340
 * Callers:
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1409F02BC (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepFindSystemSecurityAttribute(const UNICODE_STRING *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  const void **v4; // rsi
  const void **v5; // rdi
  _QWORD *i; // rdi
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0LL;
  _InterlockedExchange64(&v8, WindowsSystemAttributes);
  v3 = v8;
  v4 = 0LL;
  if ( v8 )
  {
    v5 = *(const void ***)(v8 + 8);
    while ( v5 != (const void **)(v3 + 8) )
    {
      v4 = v5;
      if ( AuthzBasepEqualUnicodeString(v5 + 4, a1) )
      {
LABEL_5:
        v1 = 1;
        return (unsigned __int64)v4 & -(__int64)(v1 != 0);
      }
      v5 = (const void **)*v5;
      v3 = v8;
    }
    for ( i = *(_QWORD **)(v3 + 32); i != (_QWORD *)(v3 + 32); i = (_QWORD *)*i )
    {
      v4 = (const void **)(i - 2);
      if ( (i[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v4 + 4, a1) )
          goto LABEL_5;
        v3 = v8;
      }
    }
  }
  return (unsigned __int64)v4 & -(__int64)(v1 != 0);
}
