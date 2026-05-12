/*
 * XREFs of NvmeCreateSymbolicLink @ 0x140087B08
 * Callers:
 *     StorCreateSymbolicLink @ 0x14004D2B0 (StorCreateSymbolicLink.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeCreateSymbolicLink(PUNICODE_STRING DeviceName, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszDest[64]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t SourceString[64]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  while ( 1 )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x40uLL,
      L"\\Device\\ScsiPort%d",
      v2,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      *(_QWORD *)&SymbolicLinkName.Length,
      SymbolicLinkName.Buffer);
    RtlInitUnicodeString(&DestinationString, pszDest);
    RtlStringCchPrintfW(SourceString, 0x40uLL, L"\\Device\\NvmePort%d", v2);
    RtlInitUnicodeString(&SymbolicLinkName, SourceString);
    v5 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v5 )
    {
      v5 = IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
      if ( !v5 )
        goto LABEL_8;
      IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v5 != -1073741771 )
      return v5;
    if ( v2 == 0xFFFF )
      return (unsigned int)-1073741670;
    if ( ++v2 > 0xFFFF )
    {
LABEL_8:
      RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\DosDevices\\Scsi%d:", v2);
      RtlInitUnicodeString(&DestinationString, pszDest);
      IoCreateSymbolicLink(&DestinationString, DeviceName);
      ConfigurationInformation = IoGetConfigurationInformation();
      ++ConfigurationInformation->ScsiPortCount;
      RtlStringCchPrintfW(SourceString, 0x40uLL, L"\\DosDevices\\NvmeAdapter%d", v2);
      RtlInitUnicodeString(&SymbolicLinkName, SourceString);
      IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
      *a2 = v2;
      return v5;
    }
  }
}
