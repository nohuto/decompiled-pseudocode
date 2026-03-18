/*
 * XREFs of WPP_IFR_SF_qqcqLd @ 0x14005D994
 * Callers:
 *     ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x14005D1E0 (-Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqcqLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *_a5,
        char _a6,
        const void *globals_0,
        unsigned int level,
        int flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &_a5,
      8LL,
      &_a6,
      1LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      4LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xCu,
    WPP_FxPkgPnp_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &_a5,
    8LL,
    &_a6,
    1LL,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    4LL,
    0LL);
}
