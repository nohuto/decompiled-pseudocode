/*
 * XREFs of HUBHTX_CancelInterruptTransfer @ 0x140002B10
 * Callers:
 *     HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1400088A0 (HUBHSM_CancellingInterruptTransferOnSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HUBHTX_CancelInterruptTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 984));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2536),
                            v3,
                            3,
                            31,
                            (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    }
  }
  return result;
}
