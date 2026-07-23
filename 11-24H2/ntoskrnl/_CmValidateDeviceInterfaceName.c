/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x1408C77C0
 * Callers:
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     PiUEventCopyEventData @ 0x1408575B0 (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408AFBA4 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1408B5078 (_CmGetDeviceInterfacePathFormat.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409F3D04 (PiSwDeviceInterfacesUpdateState.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140A1FEAC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140A41A9C (_CmSetDeviceInterfacePathFormat.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1408C8740 (ScanHexFormat.c)
 */

__int64 __fastcall CmValidateDeviceInterfaceName(__int64 a1, const WCHAR *a2)
{
  int v3; // esi
  _WORD *v4; // rbx
  unsigned __int64 Length; // r8
  _QWORD *v6; // rdx
  _WORD *i; // rax
  unsigned __int64 v8; // rbx
  NTSTATUS inited; // ebx
  WCHAR *v11; // rcx
  __int64 j; // r8
  WCHAR v13; // ax
  WCHAR *v14; // rax
  unsigned int v15; // r8d
  char *v16; // rcx
  char *v17; // rdx
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  __int128 v19; // [rsp+80h] [rbp-39h] BYREF
  STRSAFE_LPWSTR ppszDestEnd[2]; // [rsp+90h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-19h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, a2) < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x62 )
    return (unsigned int)-1073741773;
  PsGetCurrentServerSiloGlobals();
  Length = DestinationString.Length;
  if ( DestinationString.Length < 8u || *(_QWORD *)L"\\??\\" != *(_QWORD *)DestinationString.Buffer )
  {
    PsGetCurrentServerSiloGlobals();
    if ( (unsigned int)Length < 8 || *(_QWORD *)L"\\\\?\\" != *v6 )
      return (unsigned int)-1073741773;
  }
  for ( i = a2 + 4; *i; ++i )
  {
    if ( *i == 92 )
    {
      if ( (unsigned int)++v3 > 1 )
        return (unsigned int)-1073741773;
      v4 = i;
    }
  }
  v8 = v4 ? v4 - a2 : Length >> 1;
  if ( v8 > 0xFFFFFFFF || (unsigned int)v8 < 0x30 )
    return (unsigned int)-1073741773;
  v11 = SourceString;
  for ( j = 39LL; j != 1; --j )
  {
    v13 = *(WCHAR *)((char *)v11 + (char *)&a2[(unsigned int)v8 - 38] - (char *)SourceString);
    if ( !v13 )
      break;
    *v11++ = v13;
  }
  v14 = v11 - 1;
  inited = -2147483643;
  if ( j )
  {
    v14 = v11;
    inited = 0;
  }
  *v14 = 0;
  if ( !j )
  {
    StringExHandleOtherFlagsW(SourceString, 0x4EuLL, 0LL, ppszDestEnd, (size_t *)&DestinationString.Length, 0x800u);
    return (unsigned int)inited;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited >= 0 )
  {
    *(_OWORD *)ppszDestEnd = 0LL;
    if ( (unsigned int)ScanHexFormat(
                         DestinationString.Buffer,
                         DestinationString.Length >> 1,
                         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                         &v19,
                         (char *)&v19 + 4,
                         (char *)&v19 + 6,
                         ppszDestEnd,
                         (char *)ppszDestEnd + 2,
                         (char *)ppszDestEnd + 4,
                         (char *)ppszDestEnd + 6,
                         &ppszDestEnd[1],
                         (char *)&ppszDestEnd[1] + 2,
                         (char *)&ppszDestEnd[1] + 4,
                         (char *)&ppszDestEnd[1] + 6) != -1 )
    {
      v15 = 0;
      v16 = (char *)&v19 + 9;
      v17 = (char *)ppszDestEnd + 2;
      do
      {
        v15 += 8;
        v16 += 8;
        v17 += 16;
      }
      while ( v15 < 8 );
      return 0;
    }
    return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}
