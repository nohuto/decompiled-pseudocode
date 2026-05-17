/*
 * XREFs of RtlIpv4AddressToStringA @ 0x1800F06C0
 * Callers:
 *     <none>
 * Callees:
 *     sprintf_s @ 0x18012D860 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10uLL,
              "%u.%u.%u.%u",
              Addr->S_un.S_un_b.s_b1,
              Addr->S_un.S_un_b.s_b2,
              Addr->S_un.S_un_b.s_b3,
              Addr->S_un.S_un_b.s_b4)];
}
