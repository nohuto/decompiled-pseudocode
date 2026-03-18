/*
 * XREFs of WPP_IFR_SF_qqDq @ 0x14009AF20
 * Callers:
 *     imp_WdfIoTargetFormatRequestForRead @ 0x140059970 (imp_WdfIoTargetFormatRequestForRead.c)
 *     FxIoTargetFormatIo @ 0x14005A618 (FxIoTargetFormatIo.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_qqDq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        const void *level,
        unsigned int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      0x21u,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xEu,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    0x21u,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    8LL,
    0LL);
}
