/*
 * XREFs of WPP_IFR_SF_qqiid @ 0x140087F78
 * Callers:
 *     ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1400716C0 (-TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_qqiid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        __int64 level,
        __int64 flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      0x10u,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionPacket_hpp_Traceguids,
    0x10u,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
