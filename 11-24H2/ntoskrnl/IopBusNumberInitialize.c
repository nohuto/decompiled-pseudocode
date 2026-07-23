/*
 * XREFs of IopBusNumberInitialize @ 0x140723F58
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  qword_140F8AF98 = (__int64)IopBusNumberUnpackRequirement;
  qword_140F8AFA0 = (__int64)IopBusNumberPackResource;
  qword_140F8AFA8 = (__int64)IopBusNumberUnpackResource;
  qword_140F8AFB0 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber");
}
