/*
 * XREFs of ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x140047A48
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140047750 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x14008C910 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400A7090 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 AddressDescriptionSize; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // r9

  *TotalDescriptionSize = 0LL;
  _a1 = Config->IdentificationDescriptionSize;
  v5 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < _a1 )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, 0x38u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return 3221225485LL;
  }
  AddressDescriptionSize = Config->AddressDescriptionSize;
  v7 = (AddressDescriptionSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v7 < AddressDescriptionSize )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, 0x39u, WPP_FxChildList_cpp_Traceguids, AddressDescriptionSize, -1073741811);
    return 3221225485LL;
  }
  v8 = v5 + 88;
  if ( v8 < 0x58 )
  {
    *TotalDescriptionSize = -1LL;
    v9 = 58;
    goto LABEL_6;
  }
  if ( v8 + v7 < v8 )
  {
    *TotalDescriptionSize = -1LL;
    v9 = 59;
LABEL_6:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, v9, WPP_FxChildList_cpp_Traceguids, 0xC0000095);
    return 3221225621LL;
  }
  *TotalDescriptionSize = v8 + v7;
  return 0LL;
}
