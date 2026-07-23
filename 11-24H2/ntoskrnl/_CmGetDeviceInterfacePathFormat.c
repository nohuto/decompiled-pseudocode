/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x1408B5078
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfacePathFormat(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  unsigned int v5; // r9d
  _QWORD *v6; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v5 = CmValidateDeviceInterfaceName(a1, a2);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
    {
      PsGetCurrentServerSiloGlobals();
      if ( DestinationString.Length < 8u )
      {
        PsGetCurrentServerSiloGlobals();
      }
      else
      {
        if ( *(_QWORD *)L"\\??\\" == *(_QWORD *)DestinationString.Buffer )
        {
          *a3 = 1;
          return v5;
        }
        PsGetCurrentServerSiloGlobals();
        if ( *(_QWORD *)L"\\\\?\\" == *v6 )
        {
          *a3 = 0;
          return v5;
        }
      }
    }
    return (unsigned int)-1073741773;
  }
  return v5;
}
