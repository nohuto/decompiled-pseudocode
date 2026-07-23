/*
 * XREFs of IopPortInitialize @ 0x140723C30
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  qword_140F8B598 = (__int64)IopPortFindSuitableRange;
  qword_140F8B5A0 = (__int64)IopPortAddAllocation;
  qword_140F8B5A8 = (__int64)IopPortBacktrackAllocation;
  qword_140F8B518 = (__int64)IopGenericUnpackRequirement;
  qword_140F8B520 = (__int64)IopGenericPackResource;
  qword_140F8B528 = (__int64)IopGenericUnpackResource;
  qword_140F8B530 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootPortArbiter, a2, 1, (__int64)L"RootPort");
}
