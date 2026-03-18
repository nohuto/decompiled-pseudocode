/*
 * XREFs of FxLibraryIsV35DriverAllowed @ 0x14008E15C
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x140077028 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     GetNameFromPath @ 0x140074BC8 (GetNameFromPath.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A394 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x14008E3AC (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x14008E3E0 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     FxIsTestSigningOn @ 0x140095F0C (FxIsTestSigningOn.c)
 */

unsigned __int8 __fastcall FxLibraryIsV35DriverAllowed(_WDF_BIND_INFO *Info, _CLIENT_INFO *ClientInfo)
{
  int v4; // ebx
  unsigned int v5; // r8d
  unsigned __int8 v6; // r9
  _UNICODE_STRING serviceName; // [rsp+20h] [rbp-18h] BYREF

  if ( !Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() || !FxIsTestSigningOn() )
  {
    serviceName = 0LL;
    if ( IsClientInfoValid(ClientInfo) )
      GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
    else
      RtlInitUnicodeString(&serviceName, L"Unknown");
    v4 = 0;
    while ( !RtlEqualUnicodeString(&s_AllowOnRetailSystem[v4], &serviceName, 1u) )
    {
      if ( (unsigned int)++v4 >= 3 )
      {
        if ( WdfLdrDbgPrintOn )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WDF v35 Driver is not allowed at this time.\n");
        }
        ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v5, v6);
        return 0;
      }
    }
  }
  return 1;
}
