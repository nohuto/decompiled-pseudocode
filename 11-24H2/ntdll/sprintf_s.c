/*
 * XREFs of sprintf_s @ 0x18012BA90
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800D7DA0 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringA @ 0x1800EB340 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800EB960 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1800EBA80 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800EED10 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x180143160 (RtlEthernetAddressToStringA.c)
 *     __ft_process_marker_get_handle @ 0x180144898 (__ft_process_marker_get_handle.c)
 * Callees:
 *     vsprintf_s @ 0x18012BAC0 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
