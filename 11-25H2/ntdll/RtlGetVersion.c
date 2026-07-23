/*
 * XREFs of RtlGetVersion @ 0x180039460
 * Callers:
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x1800EC1C0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800397D0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1800DE4E0 (RtlStringCbCopyW.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwQueryLicenseValue @ 0x180165E10 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     strlen @ 0x180169260 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  NTSTATUS v1; // edi
  struct _PEB *v3; // r10
  wchar_t *Buffer; // r8
  DWORD dwOSVersionInfoSize; // esi
  NTSTATUS result; // eax
  size_t v7; // rax
  unsigned int dwMinorVersion_low; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char *p_Str; // rcx
  size_t v15; // rax
  int v16; // eax
  ULONG ResultDataSize; // [rsp+30h] [rbp-D0h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Type; // [rsp+38h] [rbp-C8h] BYREF
  int Data; // [rsp+3Ch] [rbp-C4h] BYREF
  int InputBuffer; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  ANSI_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE SystemInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v26; // [rsp+82h] [rbp-7Eh]
  DWORD v27; // [rsp+84h] [rbp-7Ch]
  DWORD v28; // [rsp+88h] [rbp-78h]
  DWORD v29; // [rsp+8Ch] [rbp-74h]
  DWORD v30; // [rsp+90h] [rbp-70h]
  char Str; // [rsp+94h] [rbp-6Ch] BYREF
  char v32; // [rsp+114h] [rbp+14h] BYREF
  char v33; // [rsp+194h] [rbp+94h] BYREF
  char v34; // [rsp+214h] [rbp+114h] BYREF
  char v35; // [rsp+294h] [rbp+194h] BYREF
  char v36; // [rsp+2AEh] [rbp+1AEh] BYREF
  DWORD v37; // [rsp+2C0h] [rbp+1C0h]

  v1 = 0;
  NtProductType = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x244uLL);
  v3 = NtCurrentPeb();
  DestinationString = 0LL;
  VersionInformation->dwMajorVersion = v3->OSMajorVersion;
  VersionInformation->dwMinorVersion = v3->OSMinorVersion;
  VersionInformation->dwBuildNumber = v3->OSBuildNumber;
  VersionInformation->dwPlatformId = v3->OSPlatformId;
  Buffer = v3->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 256LL, Buffer) < 0 )
    VersionInformation->szCSDVersion[0] = 0;
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFE7) != 0 || dwOSVersionInfoSize == 308 )
    return 0;
  VersionInformation->wServicePackMajor = HIBYTE(v3->OSCSDVersion);
  VersionInformation->wServicePackMinor = (unsigned __int8)v3->OSCSDVersion;
  VersionInformation->wSuiteMask = RtlGetSuiteMask();
  if ( dwOSVersionInfoSize == 292 )
    VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
  VersionInformation->wProductType = 0;
  if ( RtlGetNtProductType(&NtProductType) )
    VersionInformation->wProductType = NtProductType;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v7 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  ValueName.Length = v7;
  ValueName.MaximumLength = v7 + 2;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0
    || Data != 1
    || Type != 4
    || ResultDataSize != 4 )
  {
    VersionInformation->wSuiteMask &= ~0x10u;
    VersionInformation->wSuiteMask |= 0x100u;
    if ( VersionInformation->dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = VersionInformation[1].dwOSVersionInfoSize & 0xFFFDFEEF | 0x100;
  }
  if ( VersionInformation->dwOSVersionInfoSize != 300 )
    return 0;
  InputBuffer = VersionInformation[1].dwMinorVersion & 0xFFF;
  result = NtQuerySystemInformationEx(
             SystemBuildVersionInformation,
             &InputBuffer,
             4u,
             SystemInformation,
             0x244u,
             &ResultDataSize);
  if ( result < 0 )
    return result;
  dwMinorVersion_low = LOWORD(VersionInformation[1].dwMinorVersion);
  VersionInformation->dwMajorVersion = v27;
  VersionInformation->dwMinorVersion = v28;
  VersionInformation->dwBuildNumber = v29;
  VersionInformation->dwPlatformId = v30;
  v9 = dwMinorVersion_low >> 12;
  HIWORD(VersionInformation[1].dwMinorVersion) = v26;
  VersionInformation[1].dwBuildNumber = v37;
  if ( !v9 )
  {
    p_Str = &Str;
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    p_Str = &v35;
    goto LABEL_31;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    p_Str = &v32;
    goto LABEL_31;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    p_Str = &v36;
    goto LABEL_31;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    p_Str = &v33;
    goto LABEL_31;
  }
  if ( v13 != 1 )
    return 0;
  p_Str = &v34;
LABEL_31:
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  SourceString.Buffer = p_Str;
  v15 = strlen(p_Str);
  DestinationString.MaximumLength = 256;
  if ( v15 >= 0xFFFF )
    LOWORD(v15) = -2;
  SourceString.Length = v15;
  DestinationString.Buffer = VersionInformation->szCSDVersion;
  SourceString.MaximumLength = v15 + 1;
  v16 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  if ( v16 < 0 )
    return v16;
  return v1;
}
