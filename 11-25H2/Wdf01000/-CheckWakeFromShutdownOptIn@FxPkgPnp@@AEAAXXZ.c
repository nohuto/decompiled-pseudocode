/*
 * XREFs of ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A60C4
 * Callers:
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x14003C9B4 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x140052814 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140052D40 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140069E3C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

void __fastcall FxPkgPnp::CheckWakeFromShutdownOptIn(FxPkgPnp *this)
{
  FxDevice *m_Device; // rcx
  unsigned int value; // [rsp+20h] [rbp-50h] BYREF
  FxAutoRegKey hKey; // [rsp+28h] [rbp-48h] BYREF
  _UNICODE_STRING valueName; // [rsp+30h] [rbp-40h] BYREF
  wchar_t valueName_buffer[20]; // [rsp+40h] [rbp-30h] BYREF

  hKey.m_Key = 0LL;
  m_Device = this->m_Device;
  value = 0;
  valueName.Buffer = valueName_buffer;
  wcscpy(valueName_buffer, L"WakeFromShutdown");
  *(_QWORD *)&valueName.Length = 2228256LL;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &hKey.m_Key, 0x20019u) >= 0
    && FxRegKey::_QueryULong(hKey.m_Key, &valueName, &value) >= 0 )
  {
    this->m_WakeFromShutdownOptIn = value != 0;
  }
  FxAutoRegKey::~FxAutoRegKey(&hKey);
}
