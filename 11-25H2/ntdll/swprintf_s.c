/*
 * XREFs of swprintf_s @ 0x18012F8B0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800BE9A0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800BEB90 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800BEE10 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x1800BEE70 (RtlIpv6AddressToStringW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlStringFromGUIDEx @ 0x1800EB410 (RtlStringFromGUIDEx.c)
 *     RtlEthernetAddressToStringW @ 0x180113170 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18012F8E0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
