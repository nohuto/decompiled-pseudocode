/*
 * XREFs of RamdiskCreateSymbolicLink @ 0x140C60628
 * Callers:
 *     RamdiskInitialize @ 0x140C60778 (RamdiskInitialize.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringFromGUID @ 0x1409A2C00 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x140A1E270 (IoCreateSymbolicLink.c)
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
