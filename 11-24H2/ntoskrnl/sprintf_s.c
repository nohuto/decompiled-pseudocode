/*
 * XREFs of sprintf_s @ 0x140504170
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x14045C910 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x14045CA40 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14046FCC0 (RtlIpv4AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1404708C0 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x1405EDC00 (RtlEthernetAddressToStringA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D4D18 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407E16C4 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140BADFDC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140BAE528 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C49104 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1405041A0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
