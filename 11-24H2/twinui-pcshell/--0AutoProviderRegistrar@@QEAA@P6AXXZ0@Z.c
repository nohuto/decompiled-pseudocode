/*
 * XREFs of ??0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z @ 0x1801C8450
 * Callers:
 *     _dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x1801C8430 (_dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

AutoProviderRegistrar *__fastcall AutoProviderRegistrar::AutoProviderRegistrar(
        AutoProviderRegistrar *this,
        void (*a2)(void),
        void (*a3)(void))
{
  int v4; // edi
  HMODULE ModuleHandleW; // rbx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-148h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF

  g_ProviderRegistrationMicrosoft_Windows_Deplorch = (__int64)AutoUnregisterMicrosoft_Windows_Deplorch;
  if ( !Microsoft_Windows_Deplorch_Context )
  {
    memset_0(&VersionInformation, 0, sizeof(VersionInformation));
    v4 = 0;
    if ( McGenTracingSupportInit )
      goto LABEL_9;
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation) )
      goto LABEL_11;
    McGenPreVista = VersionInformation.dwMajorVersion < 6;
    if ( VersionInformation.dwMajorVersion > 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
    {
      v4 = 1;
    }
    if ( VersionInformation.dwMajorVersion >= 6 )
    {
LABEL_11:
      ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
      if ( ModuleHandleW || v4 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
      {
        PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
        if ( PfnEventWrite )
        {
          PfnEventRegister = (__int64 (__fastcall *)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE))GetProcAddress(
                                                                                            ModuleHandleW,
                                                                                            "EventRegister");
          if ( PfnEventRegister )
          {
            PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
            if ( PfnEventUnregister )
              goto LABEL_8;
          }
          PfnEventRegister = (__int64 (__fastcall *)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE))McGenEventTracingRegister;
        }
      }
      McGenPreVista = 1;
    }
LABEL_8:
    McGenTracingSupportInit = 1;
LABEL_9:
    if ( McGenPreVista )
    {
      TraceGuidReg.RegHandle = 0LL;
      Microsoft_Windows_Deplorch_Context = (ULONG64)&Microsoft_Windows_Deplorch_Context;
      TraceGuidReg.Guid = &Microsoft_Windows_Deplorch;
      RegisterTraceGuidsW(
        McGenControlCallback,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch,
        1u,
        &TraceGuidReg,
        0LL,
        0LL,
        &Microsoft_Windows_Deplorch_Context);
    }
    else
    {
      ((void (__fastcall *)(const GUID *, __int64 (__fastcall *)(__int64, int, char, __int64, __int64, int, __int64), ULONG64 *, ULONG64 *))PfnEventRegister)(
        &Microsoft_Windows_Deplorch,
        McGenControlCallbackV2,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch_Context);
    }
  }
  return (AutoProviderRegistrar *)&g_ProviderRegistrationMicrosoft_Windows_Deplorch;
}
