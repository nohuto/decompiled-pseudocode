/*
 * XREFs of StorDeleteSymbolicLink @ 0x14004D4A8
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x14003DE00 (RaidAdapterDisableDeviceInterface.c)
 *     NvmeAdapterDisableDeviceInterface @ 0x1400CF764 (NvmeAdapterDisableDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 *     NvmeDeleteSymbolicLink @ 0x140087CD4 (NvmeDeleteSymbolicLink.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorDeleteSymbolicLink(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  char v4; // di
  unsigned int v5; // ebx
  const wchar_t *v7; // r8
  const wchar_t *v8; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  wchar_t pszDest[64]; // [rsp+30h] [rbp-98h] BYREF

  v3 = *a3;
  v4 = a2;
  v5 = a1;
  DestinationString = 0LL;
  if ( v3 == 1314275652 )
  {
    if ( !*((_QWORD *)a3 + 74) )
      return NvmeDeleteSymbolicLink(a1, a2);
  }
  else if ( v3 != 1094997074 )
  {
    return 3221225659LL;
  }
  v7 = L"\\Device\\NvmePort%d";
  if ( !(_BYTE)a2 )
    v7 = L"\\Device\\ScsiPort%d";
  RtlStringCchPrintfW(
    pszDest,
    0x40uLL,
    v7,
    (unsigned int)a1,
    *(_QWORD *)&DestinationString.Length,
    DestinationString.Buffer);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  v8 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !v4 )
    v8 = L"\\DosDevices\\Scsi%d:";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v8, v5);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
