/*
 * XREFs of WPP_IFR_SF_qi @ 0x14008A5AC
 * Callers:
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1400895E8 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTE.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400AB59C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *globals_0,
        __int64 level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a2,
      _a1,
      &globals_0,
      8LL,
      &level,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xFu, _a2, _a1, &globals_0, 8LL, &level, 8LL, 0LL);
}
