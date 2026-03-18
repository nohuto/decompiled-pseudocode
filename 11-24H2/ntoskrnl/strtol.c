/*
 * XREFs of strtol @ 0x1404FD688
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14049C260 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1404FD460 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
