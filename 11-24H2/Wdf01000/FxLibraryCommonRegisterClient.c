/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x140077028
 * Callers:
 *     LibraryRegisterClient @ 0x140076CE0 (LibraryRegisterClient.c)
 * Callees:
 *     GetEnhancedVerifierOptions @ 0x1400472FC (GetEnhancedVerifierOptions.c)
 *     GetNameFromPath @ 0x140074BC8 (GetNameFromPath.c)
 *     FxAllocateDriverGlobals @ 0x14007D13C (FxAllocateDriverGlobals.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A394 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E15C (FxLibraryIsV35DriverAllowed.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x14008E3AC (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x14008E3E0 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x14008EB90 (McGenEventRegister_EtwRegister.c)
 *     LockVerifierSection @ 0x140096908 (LockVerifierSection.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // ebp
  unsigned int FuncCount; // r9d
  bool v8; // zf
  unsigned int v9; // r8d
  unsigned __int8 v10; // r9
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *v12; // rdi
  __int64 v13; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rdx
  _WDFFUNCTIONS *v16; // rax
  void (__fastcall *v17)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v18; // rcx
  const char *v19; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  serviceName = 0LL;
  v6 = -1073741811;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !WdfLdrDbgPrintOn )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v19 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v19 = "unknown";
      }
      else
      {
        v19 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v19 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v19);
    goto $Done_34;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      FuncCount,
      WdfVersion.FuncCount);
    goto $Done_34;
  }
  if ( FuncCount <= 0x1CA )
  {
    if ( FuncCount > 0x1BC )
    {
      if ( FuncCount == 446 || FuncCount == 448 || FuncCount == 451 || FuncCount == 453 || FuncCount == 454 )
        goto LABEL_31;
      v8 = FuncCount == 458;
    }
    else
    {
      if ( FuncCount == 444
        || FuncCount == 383
        || FuncCount == 386
        || FuncCount == 387
        || FuncCount == 396
        || FuncCount == 432 )
      {
        goto LABEL_31;
      }
      v8 = FuncCount == 438;
    }
    if ( !v8 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
        FuncCount);
      goto $Done_34;
    }
LABEL_31:
    DriverGlobals = FxAllocateDriverGlobals();
    *WdfDriverGlobals = DriverGlobals;
    if ( !DriverGlobals )
      goto $Done_34;
    v12 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
    *(_QWORD *)DriverGlobals[-7].DriverName = ClientInfo->DriverObject;
    GetEnhancedVerifierOptions((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8]);
    if ( (unsigned __int16)v12->FxEnhancedVerifierOptions || (v12->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
      }
      LockVerifierSection(v12, ClientInfo->RegistryPath);
      if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
        McGenEventRegister_EtwRegister(
          v18,
          v17,
          &KMDF_PERF_PROVIDER_Context,
          &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
      v13 = Info->FuncCount;
      FuncTable = Info->FuncTable;
      if ( (unsigned int)v13 <= 0x1B6 )
      {
        p_Functions = &VfWdfVersion.Functions;
        goto LABEL_43;
      }
      v16 = &VfWdfVersion.Functions;
    }
    else
    {
      v13 = Info->FuncCount;
      FuncTable = Info->FuncTable;
      if ( (unsigned int)v13 <= 0x1B6 )
      {
        p_Functions = &WdfVersion.Functions;
LABEL_43:
        memmove(FuncTable, p_Functions, 8 * v13);
LABEL_46:
        v6 = 0;
        if ( !WdfLdrDbgPrintOn )
          return v6;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
        goto $Done_34;
      }
      v16 = &WdfVersion.Functions;
    }
    *FuncTable = (void (__fastcall *)())v16;
    goto LABEL_46;
  }
  Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline();
  if ( Info->FuncCount != 458 )
  {
    if ( IsClientInfoValid(ClientInfo) )
      GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
    else
      RtlInitUnicodeString(&serviceName, L"Unknown");
    ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v9, v10);
    goto $Done_34;
  }
  if ( FxLibraryIsV35DriverAllowed(Info, ClientInfo) )
    goto LABEL_31;
$Done_34:
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
