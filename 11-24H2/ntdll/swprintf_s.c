/*
 * XREFs of swprintf_s @ 0x18012C000
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800B1700 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800B18F0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800B1B70 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x1800B1BD0 (RtlIpv6AddressToStringW.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     RtlStringFromGUIDEx @ 0x1800E57E0 (RtlStringFromGUIDEx.c)
 *     RtlEthernetAddressToStringW @ 0x18010B660 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18012C030 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
