/*
 * XREFs of IopBusNumberInitialize @ 0x1407263C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407055B4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  qword_140F8AD38 = (__int64)IopBusNumberUnpackRequirement;
  qword_140F8AD40 = (__int64)IopBusNumberPackResource;
  qword_140F8AD48 = (__int64)IopBusNumberUnpackResource;
  qword_140F8AD50 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber");
}
