/*
 * XREFs of sprintf_s @ 0x18012D860
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800DCC30 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringA @ 0x1800F06C0 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F0CE0 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1800F0E00 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4740 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x180144DB0 (RtlEthernetAddressToStringA.c)
 *     __ft_process_marker_get_handle @ 0x1801464E8 (__ft_process_marker_get_handle.c)
 * Callees:
 *     vsprintf_s @ 0x18012D890 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
