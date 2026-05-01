/*
 * XREFs of ?IsMobilityCenterEnabledWithOverride@@YAHH@Z @ 0x1806019D8
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall IsMobilityCenterEnabledWithOverride()
{
  int SystemMetrics; // eax
  POWER_PLATFORM_ROLE v1; // eax
  int v2; // eax
  HKEY hKey; // [rsp+30h] [rbp-78h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+40h] [rbp-68h] BYREF

  if ( !`IsMobilityCenterEnabledWithOverride'::`2'::bChecked )
  {
    `IsMobilityCenterEnabledWithOverride'::`2'::bChecked = 1;
    SystemMetrics = GetSystemMetrics(67);
    `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = SystemMetrics == 0;
    if ( !SystemMetrics )
    {
      v1 = PowerDeterminePlatformRole();
      if ( v1 != PlatformRoleMobile )
      {
        if ( v1 != PlatformRoleDesktop )
          goto LABEL_11;
        memset_0(&spc, 0, sizeof(spc));
        if ( !GetPwrCapabilities(&spc) || !spc.SystemBatteriesPresent || spc.BatteriesAreShortTerm )
          goto LABEL_11;
      }
      `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1;
      v2 = SHWindowsPolicy(&POLID_NoMobilityCenter);
      `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = v2 == 0;
      if ( !v2 )
      {
        hKey = 0LL;
        if ( !RegOpenKeyExW(
                HKEY_LOCAL_MACHINE,
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\explorer\\ControlPanel\\NameSpace\\{5ea4f148-308c-46d7-98a9-49041b1dd468}",
                0,
                1u,
                &hKey) )
        {
          RegCloseKey(hKey);
          return (unsigned int)`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled;
        }
LABEL_11:
        `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 0;
      }
    }
  }
  return (unsigned int)`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled;
}
