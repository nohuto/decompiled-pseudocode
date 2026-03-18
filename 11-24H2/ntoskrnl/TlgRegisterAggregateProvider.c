/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1406FBADC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     CmFcInitSystem3 @ 0x140C5F210 (CmFcInitSystem3.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140AC2794 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
