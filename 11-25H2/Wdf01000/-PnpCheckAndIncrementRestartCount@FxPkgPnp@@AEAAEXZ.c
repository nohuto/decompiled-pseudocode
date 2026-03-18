/*
 * XREFs of ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AA13C
 * Callers:
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140073580 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1400A6514 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x140052814 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140069E3C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1400A3A44 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

bool __fastcall FxPkgPnp::PnpCheckAndIncrementRestartCount(FxPkgPnp *this)
{
  FxDevice *m_Device; // rcx
  bool v3; // bl
  unsigned int disposition; // [rsp+30h] [rbp-40h] BYREF
  FxAutoRegKey restart; // [rsp+38h] [rbp-38h] BYREF
  FxAutoRegKey settings; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING keyNameRestart; // [rsp+48h] [rbp-28h] BYREF
  wchar_t keyNameRestart_buffer[8]; // [rsp+58h] [rbp-18h] BYREF

  settings.m_Key = 0LL;
  restart.m_Key = 0LL;
  disposition = 0;
  m_Device = this->m_Device;
  wcscpy(keyNameRestart_buffer, L"Restart");
  *(_QWORD *)&keyNameRestart.Length = 1048590LL;
  keyNameRestart.Buffer = keyNameRestart_buffer;
  v3 = (int)FxDevice::OpenSettingsKey(m_Device, &settings.m_Key, 0x1F0000u) >= 0
    && FxRegKey::_Create(settings.m_Key, &keyNameRestart, &restart.m_Key, 0xF003Fu, 1u, &disposition) >= 0
    && FxPkgPnp::PnpIncrementRestartCountLogic(this, restart.m_Key, disposition == 1);
  FxAutoRegKey::~FxAutoRegKey(&restart);
  FxAutoRegKey::~FxAutoRegKey(&settings);
  return v3;
}
