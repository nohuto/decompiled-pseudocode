/*
 * XREFs of ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x140094FA8
 * Callers:
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091C90 (imp_WdfDeviceOpenDevicemapKey.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     WPP_IFR_SF_Sd @ 0x140095180 (WPP_IFR_SF_Sd.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxDevice::OpenDevicemapKeyWorker(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *pFxDriverGlobals,
        const _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        FxRegKey *pKey)
{
  NTSTATUS id; // eax
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  const _GUID *CreateOptions; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING registryKeyPath; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t baseStringBuffer[256]; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)(&registryKeyPath.MaximumLength + 1) = 0;
  wcscpy(baseStringBuffer, L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP\\");
  memset(&baseStringBuffer[38], 0, 0x1B4uLL);
  *(_DWORD *)&registryKeyPath.Length = 33554506;
  registryKeyPath.Buffer = baseStringBuffer;
  id = RtlAppendUnicodeStringToString(&registryKeyPath, KeyName);
  v11 = id;
  if ( id >= 0 )
  {
    v12 = FxRegKey::_Create(0LL, &registryKeyPath, &pKey->m_Key, DesiredAccess, 1u, 0LL);
    v11 = v12;
    if ( v12 < 0 )
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 2u, 0x1Cu, WPP_FxDeviceKm_cpp_Traceguids, v12);
  }
  else
  {
    WPP_IFR_SF_Sd(pFxDriverGlobals, (unsigned __int8)KeyName->Buffer, v9, v10, CreateOptions, KeyName->Buffer, id);
  }
  return v11;
}
