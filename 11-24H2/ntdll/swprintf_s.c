/*
 * XREFs of swprintf_s @ 0x18012DDD0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800B9960 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800B9B30 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800B9DB0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x1800B9E10 (RtlIpv6AddressToStringW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlStringFromGUIDEx @ 0x1800EA050 (RtlStringFromGUIDEx.c)
 *     RtlEthernetAddressToStringW @ 0x1801103A0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18012DE00 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
