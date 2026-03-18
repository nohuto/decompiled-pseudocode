/*
 * XREFs of WPP_IFR_SF_Ddd @ 0x14008B078
 * Callers:
 *     imp_WdfChildListRetrievePdo @ 0x140017D50 (imp_WdfChildListRetrievePdo.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Ddd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        unsigned int id)
{
  int _a3; // [rsp+60h] [rbp-18h] BYREF
  int _a2; // [rsp+68h] [rbp-10h] BYREF

  _a3 = -1073741820;
  _a2 = 40;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxChildListAPI_cpp_Traceguids,
      0x2Du,
      &id,
      4LL,
      &_a2,
      4LL,
      &_a3,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, 0x2Du, &id, 4LL, &_a2, 4LL, &_a3, 4LL, 0LL);
}
