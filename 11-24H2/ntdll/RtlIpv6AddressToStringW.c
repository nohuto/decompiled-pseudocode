/*
 * XREFs of RtlIpv6AddressToStringW @ 0x1800B1BD0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800B1700 (RtlIpv6AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     swprintf_s @ 0x18012C000 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv6AddressToStringW(const struct in6_addr *Addr, PWSTR S)
{
  PWSTR v2; // r12
  wchar_t *v3; // r14
  unsigned int v5; // r13d
  __int64 v6; // rbx
  int v7; // r11d
  int v8; // ebp
  int v9; // r10d
  int v10; // edx
  __int64 i; // r8
  int v12; // r9d
  int v13; // eax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rbp
  int v17; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  __int16 v23; // r8
  __int16 v24; // ax
  __int16 v25; // r10
  const char *v26; // r9

  v2 = S + 46;
  v3 = S;
  v5 = 8;
  if ( *(_DWORD *)Addr )
    goto LABEL_2;
  if ( *((_WORD *)Addr + 2) )
    goto LABEL_2;
  if ( *((_WORD *)Addr + 3) )
    goto LABEL_2;
  v23 = *((_WORD *)Addr + 6);
  if ( !v23 )
    goto LABEL_2;
  v24 = *((_WORD *)Addr + 4);
  if ( v24 )
  {
    if ( v24 == -1 && !*((_WORD *)Addr + 5) )
      return &S[swprintf_s(
                  S,
                  0x2EuLL,
                  L"::ffff:0:%u.%u.%u.%u",
                  (unsigned __int8)v23,
                  HIBYTE(v23),
                  *((unsigned __int8 *)Addr + 14),
                  *((unsigned __int8 *)Addr + 15))];
    goto LABEL_2;
  }
  v25 = *((_WORD *)Addr + 5);
  if ( ((v25 + 1) & 0xFFFE) != 0 )
  {
LABEL_2:
    v6 = 0LL;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
      v5 = 6;
    v10 = 0;
    for ( i = 0LL; i < v5; ++i )
    {
      v12 = v10 + 1;
      if ( *((_WORD *)Addr + i) )
      {
        v9 = v10 + 1;
      }
      else
      {
        v19 = v7 - v8;
        v20 = v10 - v9 + 1;
        v21 = v9;
        if ( v20 <= v7 - v8 )
          v21 = v8;
        v8 = v21;
        v22 = v12;
        if ( v20 <= v19 )
          v22 = v7;
        v7 = v22;
      }
      v10 = v12;
    }
    v13 = 0;
    if ( v7 - v8 > 1 )
      v13 = v7;
    v14 = v13;
    v15 = 0;
    if ( v7 - v8 > 1 )
      v15 = v8;
    v16 = v15;
    do
    {
      if ( v6 >= v14 || v16 > v6 )
      {
        if ( v6 && v6 != v14 )
          v3 += swprintf_s(v3, v2 - v3, L":");
        v17 = swprintf_s(v3, v2 - v3, L"%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v6), 8));
      }
      else
      {
        v17 = swprintf_s(v3, v2 - v3, L"::");
        v6 = v14 - 1;
      }
      ++v6;
      v3 += v17;
    }
    while ( v6 < v5 );
    if ( v5 < 8 )
      v3 += swprintf_s(
              v3,
              v2 - v3,
              L":%u.%u.%u.%u",
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
    return v3;
  }
  v26 = (const char *)&Flags;
  if ( v25 )
    v26 = "ffff:";
  return &S[swprintf_s(
              S,
              0x2EuLL,
              L"::%hs%u.%u.%u.%u",
              v26,
              (unsigned __int8)v23,
              HIBYTE(v23),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15))];
}
