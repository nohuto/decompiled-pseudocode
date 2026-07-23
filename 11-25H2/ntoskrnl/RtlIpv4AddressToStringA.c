/*
 * XREFs of RtlIpv4AddressToStringA @ 0x140471780
 * Callers:
 *     <none>
 * Callees:
 *     sprintf_s @ 0x1405019F0 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10uLL,
              "%u.%u.%u.%u",
              (unsigned __int8)*(_DWORD *)Addr,
              *((unsigned __int8 *)Addr + 1),
              *((unsigned __int8 *)Addr + 2),
              *((unsigned __int8 *)Addr + 3))];
}
