/*
 * XREFs of TelpReadLocalSetting @ 0x180004AE8
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003338 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelEvaluateActiveSettingAuthority @ 0x1800038C0 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadRegistryDword @ 0x180003690 (TelpReadRegistryDword.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180006010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TelpReadLocalSetting(_DWORD *a1, void *a2)
{
  __int64 result; // rax
  LSTATUS RegistryDword; // ebx
  HMODULE ModuleHandleW; // rax
  __int64 v7; // r8
  unsigned __int8 (*ProcAddress)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = CPSSPeekDwordSetting(0LL, 0LL, L"AllowTelemetry", a2);
  RegistryDword = result;
  if ( (int)result < 0 )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = (unsigned __int8 (*)(void))GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled");
      if ( ProcAddress )
      {
        if ( ProcAddress() )
          RegistryDword = TelpReadRegistryDword(
                            a2,
                            HKEY_LOCAL_MACHINE,
                            L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection",
                            L"AllowTelemetry");
      }
    }
    if ( RegistryDword == -2147024894 )
    {
      *a1 = 0;
      return 0LL;
    }
    else
    {
      *a1 = 1;
      if ( RegistryDword < 0 )
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x375, v7, (const char *)(unsigned int)RegistryDword);
      return (unsigned int)RegistryDword;
    }
  }
  else
  {
    *a1 = 1;
  }
  return result;
}
