/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x140357B4C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140357ADC (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttribute @ 0x140357380 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140357E50 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14035F674 (AuthzBasepAddSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 SecurityAttribute; // rax
  _WORD *v6; // rcx
  _WORD *v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  v11 = 0LL;
  if ( v2 )
    return 3221225485LL;
  LOWORD(v11) = *(_WORD *)a2;
  WORD1(v11) = v11;
  *((_QWORD *)&v11 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v11);
  v6 = (_WORD *)SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
  }
  else
  {
    v7 = AuthzBasepAllocateSecurityAttribute((unsigned __int16 *)&v11);
    v6 = v7;
    if ( !v7 )
      return 3221225626LL;
    *((_DWORD *)v7 + 13) = *(_DWORD *)(a2 + 20);
    v7[24] = *(_WORD *)(a2 + 16);
  }
  if ( (*((_DWORD *)v6 + 14) & 2) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = v6 + 8;
    if ( *v8 != a1 + 32 )
      __fastfail(3u);
    *v9 = a1 + 32;
    *((_QWORD *)v6 + 3) = v8;
    *v8 = v9;
    *(_QWORD *)(a1 + 40) = v9;
    *((_DWORD *)v6 + 14) |= 2u;
    ++*(_DWORD *)(a1 + 24);
  }
  return AuthzBasepAddSecurityAttributeValues(v6, a2);
}
