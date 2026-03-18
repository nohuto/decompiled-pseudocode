/*
 * XREFs of RamdiskCreateSymbolicLink @ 0x140C5E4D8
 * Callers:
 *     RamdiskInitialize @ 0x140C5E628 (RamdiskInitialize.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringFromGUID @ 0x1409BC5B0 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x140A298B0 (IoCreateSymbolicLink.c)
 */

__int64 __fastcall RamdiskCreateSymbolicLink(__int64 a1, __int64 a2)
{
  bool v2; // zf
  NTSTATUS v4; // ebx
  ULONG_PTR v5; // rdx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-C0h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DeviceName; // [rsp+60h] [rbp-A0h] BYREF
  char pszDest[32]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t SourceString[56]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *(_BYTE *)(a2 + 16) == 0;
  GuidString = 0LL;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  DeviceName = 0LL;
  if ( v2 )
  {
    v4 = RtlStringFromGUID((const GUID *const)a2, &GuidString);
    if ( v4 < 0 )
    {
      v5 = 4LL;
      goto LABEL_8;
    }
    RtlStringCbPrintfA(pszDest, 0x14uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
    RtlInitAnsiString(&DestinationString, pszDest);
    v4 = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
    if ( v4 < 0 )
    {
      v5 = 5LL;
      goto LABEL_8;
    }
    RtlStringCbPrintfW(SourceString, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
    RtlInitUnicodeString(&DeviceName, SourceString);
    v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
    RtlFreeAnsiString(&GuidString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( v4 < 0 )
    {
      v5 = 6LL;
LABEL_8:
      KeBugCheckEx(0xF8u, v5, v4, 0LL, 0LL);
    }
  }
  return 0LL;
}
