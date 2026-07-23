/*
 * XREFs of sprintf_s @ 0x140501A30
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x140451B10 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x140451C40 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14046A220 (RtlIpv4AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14046AF70 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x1405EB1E0 (RtlEthernetAddressToStringA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407E1C14 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140BAFAA4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140BAFFDC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140BB0528 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C4B228 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x140501A60 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
