/*
 * XREFs of WPP_IFR_SF_cqcqq @ 0x1400A6AAC
 * Callers:
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1400711E0 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_cqcqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        char _a5,
        const void *globals_0,
        char level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgPnp_cpp_Traceguids,
      0x4Bu,
      &_a5,
      1LL,
      &globals_0,
      8LL,
      &level,
      1LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_FxPkgPnp_cpp_Traceguids,
    0x4Bu,
    &_a5,
    1LL,
    &globals_0,
    8LL,
    &level,
    1LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
