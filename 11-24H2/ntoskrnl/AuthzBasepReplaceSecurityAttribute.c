/*
 * XREFs of AuthzBasepReplaceSecurityAttribute @ 0x1403B8B5C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B8958 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1403B8A94 (AuthzBasepAddSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepReplaceSecurityAttribute(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  int v6; // eax
  int v7; // ecx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = *(_OWORD *)(a2 + 16);
  v9 = *(_OWORD *)a2;
  v5 = *(_QWORD *)(a2 + 32);
  v10 = v4;
  DWORD2(v10) = 0;
  v11 = v5;
  v6 = AuthzBasepDeleteSecurityAttribute(a1, (__int64)&v9);
  v7 = 0;
  if ( v6 != -1073741275 )
    v7 = v6;
  if ( v7 >= 0 && *(_DWORD *)(a2 + 24) )
    return (unsigned int)AuthzBasepAddSecurityAttribute(a1, a2);
  return (unsigned int)v7;
}
