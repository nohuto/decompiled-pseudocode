/*
 * XREFs of strtol @ 0x1404FAF48
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140496E90 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1404FAD20 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
