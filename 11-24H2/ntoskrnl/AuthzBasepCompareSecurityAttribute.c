/*
 * XREFs of AuthzBasepCompareSecurityAttribute @ 0x140A17EE4
 * Callers:
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140810E5C (AuthzBasepCompareSecurityAttributesInformation.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A17DEC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 */

char __fastcall AuthzBasepCompareSecurityAttribute(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned __int16 *v5; // r14
  _QWORD *v6; // r15
  _QWORD *i; // rbx

  v2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
    && *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52) )
  {
    v6 = (_QWORD *)(a1 + 72);
    for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
    {
      if ( i == v6 )
        return 1;
      if ( *(_WORD *)(a1 + 48) != 1 && *(_WORD *)(a1 + 48) != 2 )
      {
        if ( *(_WORD *)(a1 + 48) == 3 || *(_WORD *)(a1 + 48) == 4 || *(_WORD *)(a1 + 48) == 5 )
          goto LABEL_13;
        if ( *(_WORD *)(a1 + 48) != 6 )
          break;
      }
      v5 = (unsigned __int16 *)i[5];
LABEL_14:
      if ( !AuthzBasepFindSecurityAttributeValue(a2, v5, *(_WORD *)(a1 + 48)) )
        return v2;
    }
    if ( *(_WORD *)(a1 + 48) != 16 )
      goto LABEL_14;
LABEL_13:
    v5 = (unsigned __int16 *)(i + 5);
    goto LABEL_14;
  }
  return v2;
}
