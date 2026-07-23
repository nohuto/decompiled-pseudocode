/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x1403B8760
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // rsi
  __int64 *v6; // r14
  char v7; // r15
  __int64 *i; // rdi
  const UNICODE_STRING *v11; // rcx
  BOOLEAN v12; // al

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  while ( v2 != v3 )
  {
    v6 = v2;
    v11 = (const UNICODE_STRING *)(v2 + 4);
    if ( KeGetCurrentIrql() >= 2u )
      v12 = AuthzBasepEqualUnicodeStringCaseSensitive(v11, a2);
    else
      v12 = RtlEqualUnicodeString(v11, a2, 1u);
    if ( v12 )
    {
LABEL_12:
      v7 = 1;
      goto LABEL_5;
    }
    v2 = (_QWORD *)*v2;
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v6 = i - 2;
    if ( (i[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(v6 + 4, a2) )
      goto LABEL_12;
  }
LABEL_5:
  if ( v7 )
    v4 = v6;
  return v4 != 0LL;
}
