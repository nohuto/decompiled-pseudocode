/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x1403B8A94
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x1403B8B5C (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B8830 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1403B9250 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403BA040 (AuthzBasepAddSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 *SecurityAttribute; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  v11 = 0LL;
  if ( v2 )
    return 3221225485LL;
  v11.Length = *(_WORD *)a2;
  v11.MaximumLength = v11.Length;
  v11.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v11);
  v6 = (__int64)SecurityAttribute;
  if ( SecurityAttribute )
  {
    *((_DWORD *)SecurityAttribute + 14) &= ~4u;
  }
  else
  {
    v7 = AuthzBasepAllocateSecurityAttribute(&v11);
    v6 = v7;
    if ( !v7 )
      return 3221225626LL;
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v7 + 48) = *(_WORD *)(a2 + 16);
  }
  if ( (*(_DWORD *)(v6 + 56) & 2) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = (_QWORD *)(v6 + 16);
    if ( *v8 != a1 + 32 )
      __fastfail(3u);
    *v9 = a1 + 32;
    *(_QWORD *)(v6 + 24) = v8;
    *v8 = v9;
    *(_QWORD *)(a1 + 40) = v9;
    *(_DWORD *)(v6 + 56) |= 2u;
    ++*(_DWORD *)(a1 + 24);
  }
  return AuthzBasepAddSecurityAttributeValues(v6, a2);
}
