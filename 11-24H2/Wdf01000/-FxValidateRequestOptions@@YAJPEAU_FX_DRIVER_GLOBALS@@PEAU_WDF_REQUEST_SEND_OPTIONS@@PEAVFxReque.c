/*
 * XREFs of ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x14001F170
 * Callers:
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x14001EE38 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x14004CF30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x14004F4E0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x14009D330 (imp_WdfUsbTargetDeviceQueryString.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateRequestOptions(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        FxRequestBase *a3)
{
  unsigned int _a3; // r8d

  if ( !Options )
    return 0LL;
  if ( Options->Size == 16 )
  {
    _a3 = Options->Flags;
    if ( (_a3 & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        _a3,
        0xFu);
      return 3221225485LL;
    }
    else
    {
      if ( (_a3 & 0xFFFFFFF7) == 0 || (_a3 & 8) == 0 )
        return 0LL;
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        8u,
        _a3);
      return 3221225485LL;
    }
  }
  else
  {
    WPP_IFR_SF_qdd(
      FxDriverGlobals,
      2u,
      6u,
      0xAu,
      WPP_FxRequestValidateFunctions_hpp_Traceguids,
      Options,
      16,
      Options->Size);
    return 3221225476LL;
  }
}
