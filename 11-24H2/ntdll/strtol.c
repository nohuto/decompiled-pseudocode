/*
 * XREFs of strtol @ 0x180125190
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1800EAA40 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x180124F54 (strtoxlX.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX(
           (__int64)&_initiallocalestructinfo,
           (unsigned __int8 *)String,
           (unsigned __int8 **)EndPtr,
           Radix,
           0,
           0);
}
