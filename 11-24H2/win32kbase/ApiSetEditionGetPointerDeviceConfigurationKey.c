/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400A8D38
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400A755C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1400A7680 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     AccessPTPEnabledStatus @ 0x1400A8AA0 (AccessPTPEnabledStatus.c)
 *     GetDWORDSettingValuesEx @ 0x1400A8BE0 (GetDWORDSettingValuesEx.c)
 *     GetDWORDSettingValues @ 0x1400A8CA0 (GetDWORDSettingValues.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x140199844 (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ReadInputHapticSettings @ 0x1401B67D0 (ReadInputHapticSettings.c)
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 *     WriteSettingValues @ 0x1401B6F50 (WriteSettingValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rbx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7208LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 7216LL);
      if ( v8 )
        return v8(v3, v2);
    }
  }
  return v4;
}
