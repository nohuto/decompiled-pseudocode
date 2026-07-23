/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x14046A670
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x14046A8A0 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // bp
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // r13
  NTSTATUS result; // eax
  PCWSTR v13; // rbx
  wint_t v14; // di
  wint_t v15; // ax
  wint_t *v16; // rdi
  unsigned __int16 v17; // bp
  wint_t v18; // bx
  __int16 v19; // si
  PCWSTR v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v20, Address) < 0 )
    return -1073741811;
  v13 = v20;
  if ( *v20 == 37 )
  {
    v13 = v20 + 1;
    v14 = v20[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    while ( v14 && v14 != 93 )
    {
      if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v10 = v14 + 2 * (v10 + 4 * (v10 - 6));
      v14 = *v13;
    }
  }
  v15 = *v13;
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    v15 = v13[1];
    v11 = 0;
    if ( v15 == 58 )
    {
      v16 = (wint_t *)(v13 + 2);
      v17 = 10;
      if ( v13[2] == 48 )
      {
        v17 = 8;
        v16 = (wint_t *)(v13 + 3);
        if ( ((v13[3] - 88) & 0xFFDF) == 0 )
        {
          v17 = 16;
          v16 = (wint_t *)(v13 + 4);
        }
      }
      while ( 1 )
      {
        v15 = *v16;
        v18 = *v16;
        if ( !*v16 )
          break;
        if ( v15 < 0x80u && iswctype(v15, 4u) && v18 - 48 < v17 )
        {
          if ( v18 + v17 * (unsigned int)v9 - 48 > 0xFFFF )
            return -1073741811;
          v19 = v9 * v17 - 48;
        }
        else
        {
          if ( v17 != 16
            || v18 >= 0x80u
            || !iswctype(v18, 0x80u)
            || v18 + 16 * v9 - (iswctype(v18, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v19 = 16 * v9;
          v18 = v18 - (iswctype(v18, 2u) != 0 ? 97 : 65) + 10;
        }
        v9 = v18 + v19;
        ++v16;
      }
    }
  }
  if ( v15 || v11 )
    return -1073741811;
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
