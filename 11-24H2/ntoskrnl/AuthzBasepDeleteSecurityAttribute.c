/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140357C3C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140357ADC (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140356D20 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140356DA0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140357E50 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x1404357B0 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F89C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v3 = 0;
  v14 = 0;
  LOWORD(v13) = *(_WORD *)a2;
  WORD1(v13) = v13;
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v13);
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
      v3 = AuthzBasepDeleteSecurityAttributeValues(v7, a2, &v14);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v14 )
        *(_DWORD *)(v7 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v7 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v7, (__int64)v6);
    }
    v12 = *(_DWORD *)(v7 + 56);
    if ( (v12 & 4) != 0 && (v12 & 1) == 0 )
    {
      LOBYTE(v11) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v7, 0LL, v11);
      AuthzBasepFreeSecurityAttributeValues(v7, 0);
      ExFreePoolWithTag((PVOID)v7, 0);
    }
  }
  return (unsigned int)v3;
}
