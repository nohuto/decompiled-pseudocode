/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1406F971C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     CmFcInitSystem3 @ 0x140C61360 (CmFcInitSystem3.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140ABDA7C (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
