/*
 * XREFs of AuthzBasepDeleteSecurityAttributeValues @ 0x1404F62A0
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B8958 (AuthzBasepDeleteSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140423510 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttributeValues(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int16 v3; // ax
  unsigned int v4; // edi
  unsigned int i; // esi
  unsigned __int16 *v9; // rdx
  __int64 SecurityAttributeValue; // rax
  __int64 v11; // r11
  int v12; // eax
  PVOID v13; // r11
  unsigned int v14; // ecx

  v3 = *(_WORD *)(a2 + 16);
  v4 = 0;
  *a3 = 0;
  if ( *(_WORD *)(a1 + 48) != v3 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
  {
    if ( *(_WORD *)(a1 + 48) == 1 || *(_WORD *)(a1 + 48) == 2 )
    {
LABEL_14:
      v9 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 32) + 8LL * i);
      goto LABEL_15;
    }
    if ( *(_WORD *)(a1 + 48) != 3 )
    {
      if ( *(_WORD *)(a1 + 48) == 4 )
      {
        v9 = (unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24LL * i);
        goto LABEL_15;
      }
      if ( *(_WORD *)(a1 + 48) != 5 )
      {
        if ( *(_WORD *)(a1 + 48) == 6 )
          goto LABEL_14;
        if ( *(_WORD *)(a1 + 48) != 16 )
          return (unsigned int)-1073741811;
      }
    }
    v9 = (unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * i);
LABEL_15:
    SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v9, *(_WORD *)(a1 + 48));
    v11 = SecurityAttributeValue;
    if ( !SecurityAttributeValue )
      return (unsigned int)-1073741275;
    v12 = *(_DWORD *)(SecurityAttributeValue + 32);
    if ( (v12 & 4) != 0 )
      return (unsigned int)-1073741275;
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)(v11 + 32) = v12 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, v11, 0, 1);
      ++*(_DWORD *)(a1 + 64);
    }
    else
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, (__int64 *)v11, 0);
      ExFreePoolWithTag(v13, 0);
    }
  }
  v14 = *(_DWORD *)(a1 + 60);
  if ( v14 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 88) <= v14 )
    *a3 = 1;
  return v4;
}
