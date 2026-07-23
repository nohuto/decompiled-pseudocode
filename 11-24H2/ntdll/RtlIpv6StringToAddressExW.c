/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1800B2770
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x1800B2A40 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x180122D50 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  unsigned __int16 v4; // si
  WCHAR v8; // bp
  const WCHAR *v9; // rcx
  ULONG v10; // r14d
  bool v11; // r13
  PCWSTR v12; // rdi
  wint_t v13; // bx
  wint_t v14; // ax
  wint_t *v15; // rdi
  unsigned __int16 v16; // bp
  _WORD *v17; // rcx
  __int16 v18; // ax
  wint_t v19; // bx
  int v20; // eax
  int v21; // edx
  __int16 v22; // si
  int v23; // eax
  __int16 v24; // cx
  LONG result; // eax
  int v26; // eax
  PCWSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  Terminator = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v8 = *AddressString;
  v9 = AddressString + 1;
  v10 = 0;
  if ( v8 != 91 )
    v9 = AddressString;
  v11 = v8 == 91;
  if ( RtlIpv6StringToAddressW(v9, &Terminator, Address) < 0 )
    return -1073741811;
  v12 = Terminator;
  if ( *Terminator == 37 )
  {
    v13 = Terminator[1];
    v12 = Terminator + 1;
    if ( v13 >= 0x80u || !iswctype(v13, 4u) )
      return -1073741811;
    while ( v13 && v13 != 93 )
    {
      if ( v13 >= 0x80u || !iswctype(v13, 4u) || v13 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v26 = v13;
      v13 = v12[1];
      ++v12;
      v10 = v26 + 2 * (5 * v10 - 24);
    }
  }
  v14 = *v12;
  if ( *v12 == 93 )
  {
    if ( v8 != 91 )
      return -1073741811;
    v14 = v12[1];
    v11 = 0;
    if ( v14 == 58 )
    {
      v15 = (wint_t *)(v12 + 2);
      v16 = 10;
      if ( *v15 == 48 )
      {
        v17 = v15 + 1;
        v18 = v15[1] - 88;
        v16 = 8;
        ++v15;
        if ( (v18 & 0xFFDF) == 0 )
        {
          v16 = 16;
          v15 = v17 + 1;
        }
      }
      while ( 1 )
      {
        v14 = *v15;
        v19 = *v15;
        if ( !*v15 )
          break;
        if ( v14 < 0x80u && iswctype(v14, 4u) && v19 - 48 < v16 )
        {
          if ( v19 + v16 * (unsigned int)v4 - 48 > 0xFFFF )
            return -1073741811;
          v4 = v19 + v4 * v16 - 48;
          ++v15;
        }
        else
        {
          if ( v16 != 16 || v19 >= 0x80u || !iswctype(v19, 0x80u) )
            return -1073741811;
          v20 = iswctype(v19, 2u);
          v21 = 65;
          if ( v20 )
            v21 = 97;
          if ( v19 + 16 * (unsigned int)v4 - v21 + 10 > 0xFFFF )
            return -1073741811;
          v22 = 16 * v4;
          v23 = iswctype(v19, 2u);
          v24 = 65;
          if ( v23 )
            v24 = 97;
          v4 = v19 - v24 + 10 + v22;
          ++v15;
        }
      }
    }
  }
  if ( !v14 && !v11 )
  {
    *Port = __ROR2__(v4, 8);
    result = 0;
    *ScopeId = v10;
    return result;
  }
  return -1073741811;
}
