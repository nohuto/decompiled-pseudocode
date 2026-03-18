/*
 * XREFs of WPP_IFR_SF_qqiDq @ 0x140087D40
 * Callers:
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x140049500 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_qqiDq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        __int64 level,
        unsigned int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      0xDu,
      &_a5,
      8LL,
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
    0xFu,
    WPP_FxDmaTransactionPacket_hpp_Traceguids,
    0xDu,
    &_a5,
    8LL,
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
