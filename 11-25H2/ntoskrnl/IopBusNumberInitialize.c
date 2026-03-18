/*
 * XREFs of IopBusNumberInitialize @ 0x14071A448
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1406F96D4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  qword_140F8A5B8 = (__int64)IopBusNumberUnpackRequirement;
  qword_140F8A5C0 = (__int64)IopBusNumberPackResource;
  qword_140F8A5C8 = (__int64)IopBusNumberUnpackResource;
  qword_140F8A5D0 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber");
}
