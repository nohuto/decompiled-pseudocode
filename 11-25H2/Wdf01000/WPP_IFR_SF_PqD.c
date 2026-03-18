/*
 * XREFs of WPP_IFR_SF_PqD @ 0x1400A17EC
 * Callers:
 *     imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400A1F50 (imp_WdfDmaEnablerSetMaximumScatterGatherElements.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_PqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        unsigned __int64 flags,
        const void *id)
{
  unsigned int _a3[4]; // [rsp+60h] [rbp-18h] BYREF

  _a3[0] = -1;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDmaEnablerAPI_cpp_Traceguids,
      0x15u,
      &flags,
      8LL,
      &id,
      8LL,
      _a3,
      4LL,
      0LL);
  FxIFR(globals, 3u, 0xFu, WPP_FxDmaEnablerAPI_cpp_Traceguids, 0x15u, &flags, 8LL, &id, 8LL, _a3, 4LL, 0LL);
}
