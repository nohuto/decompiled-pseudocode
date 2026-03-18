/*
 * XREFs of WPP_IFR_SF_Lqd @ 0x140082BA8
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140028280 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1400A0C38 (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_Lqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        unsigned int _a3,
        const void *globals_0,
        int level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a2,
      _a1,
      &_a3,
      4LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0xDu, _a2, _a1, &_a3, 4LL, &globals_0, 8LL, &level, 4LL, 0LL);
}
