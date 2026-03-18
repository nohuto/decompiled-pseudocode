/*
 * XREFs of FxIoTargetValidateOpenParams @ 0x140012C08
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x140011BA0 (imp_WdfIoTargetOpen.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qqqqd @ 0x140093BD4 (WPP_IFR_SF_qqqqd.c)
 */

int __fastcall FxIoTargetValidateOpenParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  int result; // eax
  unsigned __int16 v3; // r9

  switch ( OpenParams->Type )
  {
    case WdfIoTargetOpenUseExistingDevice:
      if ( OpenParams->TargetDeviceObject )
      {
        if ( !FxDriverGlobals->IsUserModeDriver )
        {
          if ( OpenParams->TargetFileObject
            || *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove == 0LL && !OpenParams->EvtIoTargetRemoveComplete )
          {
            return 0;
          }
          WPP_IFR_SF_qqqqd(
            FxDriverGlobals,
            (unsigned __int8)OpenParams,
            0xEu,
            0xEu,
            WPP_FxIoTargetAPI_cpp_Traceguids,
            OpenParams,
            OpenParams->EvtIoTargetQueryRemove,
            OpenParams->EvtIoTargetRemoveCanceled,
            OpenParams->EvtIoTargetRemoveComplete,
            -1073741811);
          return -1073741811;
        }
        v3 = 13;
      }
      else
      {
        v3 = 12;
      }
      goto LABEL_11;
    case WdfIoTargetOpenByName:
      if ( OpenParams->TargetDeviceName.Buffer
        && OpenParams->TargetDeviceName.Length
        && OpenParams->TargetDeviceName.MaximumLength )
      {
        return 0;
      }
      v3 = 15;
      goto LABEL_11;
    case WdfIoTargetOpenReopen:
      return 0;
  }
  if ( OpenParams->Type != WdfIoTargetOpenLocalTargetByFile )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPI_cpp_Traceguids, OpenParams->Type, -1073741811);
    return -1073741811;
  }
  if ( !FxDriverGlobals->IsUserModeDriver )
  {
    v3 = 16;
LABEL_11:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, v3, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
  if ( *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove != 0LL || OpenParams->EvtIoTargetRemoveComplete )
  {
    WPP_IFR_SF_qqqd(
      FxDriverGlobals,
      2u,
      0xEu,
      0x11u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      OpenParams->EvtIoTargetQueryRemove,
      OpenParams->EvtIoTargetRemoveCanceled,
      OpenParams->EvtIoTargetRemoveComplete,
      -1073741811);
    return -1073741811;
  }
  if ( !OpenParams->FileName.Buffer && !OpenParams->FileName.Length && !OpenParams->FileName.MaximumLength )
    return 0;
  result = FxValidateUnicodeString(FxDriverGlobals, &OpenParams->FileName);
  if ( result >= 0 )
    return 0;
  return result;
}
