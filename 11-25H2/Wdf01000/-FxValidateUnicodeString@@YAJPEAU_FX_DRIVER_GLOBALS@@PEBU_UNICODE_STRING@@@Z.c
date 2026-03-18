/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C
 * Callers:
 *     imp_WdfStringCreate @ 0x140008400 (imp_WdfStringCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x140012C08 (FxIoTargetValidateOpenParams.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x14001A810 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x140050C20 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x140051C00 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryQueryValue @ 0x140052700 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryOpenKey @ 0x140052930 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryQueryULong @ 0x140052B80 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x140053940 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140053AA0 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x140053D40 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfRegistryAssignValue @ 0x1400540A0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryQueryString @ 0x140054630 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryCreateKey @ 0x140054A10 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryAssignULong @ 0x140054C70 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignString @ 0x140054F40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1400551D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006EBA0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceInitAssignName @ 0x140075720 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x140075910 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1400789E0 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079B20 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C7D0 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E460 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x14008FD30 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140090F30 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091C90 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryAssignMemory @ 0x1400995C0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997A0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x140099A30 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x140099C80 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  int _a2; // r8d
  int MaximumLength; // eax

  _a2 = String->Length;
  if ( (_a2 & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, _a2, -1073741811);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else if ( (_WORD)MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else
    {
      if ( (unsigned __int16)_a2 <= (unsigned __int16)MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        _a2,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
