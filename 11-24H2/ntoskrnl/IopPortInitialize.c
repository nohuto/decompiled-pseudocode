/*
 * XREFs of IopPortInitialize @ 0x1407260A0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407055B4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  qword_140F8B1D8 = (__int64)IopPortFindSuitableRange;
  qword_140F8B1E0 = (__int64)IopPortAddAllocation;
  qword_140F8B1E8 = (__int64)IopPortBacktrackAllocation;
  qword_140F8B158 = (__int64)IopGenericUnpackRequirement;
  qword_140F8B160 = (__int64)IopGenericPackResource;
  qword_140F8B168 = (__int64)IopGenericUnpackResource;
  qword_140F8B170 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootPortArbiter, a2, 1, (__int64)L"RootPort");
}
