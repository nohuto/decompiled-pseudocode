/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x14035F908
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140291CAC (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14029045C (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402904E0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14035FB50 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140439600 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F61C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 SecurityAttribute; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v3 = 0;
  v13 = 0;
  LOWORD(v12) = *(_WORD *)a2;
  WORD1(v12) = v12;
  *((_QWORD *)&v12 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v12);
  v7 = SecurityAttribute;
  if ( !SecurityAttribute )
    return (unsigned int)-1073741275;
  v9 = *(_DWORD *)(SecurityAttribute + 56);
  if ( (v9 & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( (v9 & 2) == 0 )
    {
      v6 = *(_QWORD **)(a1 + 40);
      v10 = (_QWORD *)(v7 + 16);
      if ( *v6 != a1 + 32 )
        __fastfail(3u);
      *v10 = a1 + 32;
      *(_QWORD *)(v7 + 24) = v6;
      *v6 = v10;
      *(_QWORD *)(a1 + 40) = v10;
      *(_DWORD *)(v7 + 56) |= 2u;
      ++*(_DWORD *)(a1 + 24);
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v7, a2, &v13);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v13 )
        *(_DWORD *)(v7 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v7 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v7, (__int64)v6);
    }
    if ( (*(_DWORD *)(v7 + 56) & 5) == 4 )
    {
      LOBYTE(v11) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v7, 0LL, v11);
      AuthzBasepFreeSecurityAttributeValues(v7, 0);
      ExFreePoolWithTag((PVOID)v7, 0);
    }
  }
  return (unsigned int)v3;
}
