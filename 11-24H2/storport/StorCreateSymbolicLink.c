/*
 * XREFs of StorCreateSymbolicLink @ 0x14004D2B0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 *     NvmeCreateSymbolicLink @ 0x140087B08 (NvmeCreateSymbolicLink.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorCreateSymbolicLink(PUNICODE_STRING DeviceName, char a2, unsigned int *a3, int *a4)
{
  int v4; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  NTSTATUS v11; // eax
  struct _UNICODE_STRING *p_DestinationString; // rcx
  const wchar_t *v13; // r8
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszDest[64]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t SourceString[64]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a4;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  if ( v4 == 1314275652 )
  {
    if ( !*((_QWORD *)a4 + 74) )
      return NvmeCreateSymbolicLink(DeviceName);
  }
  else if ( v4 != 1094997074 )
  {
    return 3221225659LL;
  }
  v9 = 0;
  while ( 1 )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x40uLL,
      L"\\Device\\ScsiPort%d",
      v9,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      *(_QWORD *)&SymbolicLinkName.Length,
      SymbolicLinkName.Buffer);
    RtlInitUnicodeString(&DestinationString, pszDest);
    RtlStringCchPrintfW(SourceString, 0x40uLL, L"\\Device\\NvmePort%d", v9);
    RtlInitUnicodeString(&SymbolicLinkName, SourceString);
    v10 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v10 )
      break;
LABEL_10:
    if ( v10 != -1073741771 )
      return v10;
    if ( v9 == 0xFFFF )
      return (unsigned int)-1073741670;
    if ( ++v9 > 0xFFFF )
      goto LABEL_17;
  }
  v11 = IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
  p_DestinationString = &DestinationString;
  v10 = v11;
  if ( v11 )
  {
    IoDeleteSymbolicLink(&DestinationString);
    goto LABEL_10;
  }
  if ( !a2 )
    p_DestinationString = &SymbolicLinkName;
  IoDeleteSymbolicLink(p_DestinationString);
LABEL_17:
  v13 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !a2 )
    v13 = L"\\DosDevices\\Scsi%d:";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v13, v9);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoCreateSymbolicLink(&DestinationString, DeviceName);
  if ( !a2 )
  {
    ConfigurationInformation = IoGetConfigurationInformation();
    ++ConfigurationInformation->ScsiPortCount;
  }
  *a3 = v9;
  return v10;
}
