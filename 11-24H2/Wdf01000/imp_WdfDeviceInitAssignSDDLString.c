/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x140046FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140020EC0 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  int result; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  FxString *Sddl; // rax
  FX_POOL **v10; // rax
  FxString *v11; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( SDDLString )
    {
      result = FxValidateUnicodeString(v5, SDDLString);
      if ( result >= 0 )
      {
        Sddl = DeviceInit->Security.Sddl;
        if ( Sddl )
          return FxString::Assign(Sddl, SDDLString);
        v10 = FxObjectHandleAlloc2(v5, v7, 0x78uLL, v8, 0LL, 0, FxObjectTypeExternal);
        if ( v10 )
          FxString::FxString((FxString *)v10, v5);
        else
          Sddl = 0LL;
        DeviceInit->Security.Sddl = Sddl;
        if ( Sddl )
        {
          return FxString::Assign(Sddl, SDDLString);
        }
        else
        {
          WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
          return -1073741670;
        }
      }
    }
    else if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    {
      return -1073741808;
    }
    else
    {
      v11 = DeviceInit->Security.Sddl;
      if ( v11 )
      {
        v11->Release(v11, 0LL, 528, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->Security.Sddl = 0LL;
      }
      return 0;
    }
  }
  return result;
}
