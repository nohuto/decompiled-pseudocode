/*
 * XREFs of RtlIpv4AddressToStringW @ 0x1800B1B70
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x1800B18F0 (RtlIpv4AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     swprintf_s @ 0x18012C000 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v5 = *((unsigned __int8 *)Addr + 3);
  v4 = *((unsigned __int8 *)Addr + 2);
  v3 = *((unsigned __int8 *)Addr + 1);
  return &S[swprintf_s(S, 0x10uLL, L"%u.%u.%u.%u", *(unsigned __int8 *)Addr, v3, v4, v5)];
}
