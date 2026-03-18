/*
 * XREFs of ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1400464B0
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1400318C4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x140044E34 (-ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x140081F18 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A6194 (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1400A73F0 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AA20C (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140046ACC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxDevice::OpenSettingsKey(FxDevice *this, void **Key, ACCESS_MASK DesiredAccess)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  ACCESS_MASK v6; // r8d
  NTSTATUS v7; // ebx
  FxAutoRegKey parent; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING wdf; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  wchar_t wdf_buffer[4]; // [rsp+88h] [rbp+2Fh] BYREF

  parent.m_Key = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
    return 3221225860LL;
  v7 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, v6, &parent.m_Key);
  if ( v7 >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    wcscpy(wdf_buffer, L"WDF");
    *(_QWORD *)&wdf.Length = 524294LL;
    wdf.Buffer = wdf_buffer;
    ObjectAttributes.RootDirectory = parent.m_Key;
    ObjectAttributes.ObjectName = &wdf;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v7 = ZwCreateKey(Key, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
  }
  if ( parent.m_Key )
    ZwClose(parent.m_Key);
  return (unsigned int)v7;
}
