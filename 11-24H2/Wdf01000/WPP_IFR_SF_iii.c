/*
 * XREFs of WPP_IFR_SF_iii @ 0x14009A0D8
 * Callers:
 *     IsLoggingEnabledAndNeeded @ 0x140072F4C (IsLoggingEnabledAndNeeded.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_iii(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        __int64 level,
        __int64 flags,
        __int64 id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxTelemetryKm_cpp_Traceguids,
      0xAu,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 5u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, 0xAu, &level, 8LL, &flags, 8LL, &id, 8LL, 0LL);
}
