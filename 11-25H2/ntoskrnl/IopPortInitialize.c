/*
 * XREFs of IopPortInitialize @ 0x14071A120
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1406F96D4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  qword_140F8ABB8 = (__int64)IopPortFindSuitableRange;
  qword_140F8ABC0 = (__int64)IopPortAddAllocation;
  qword_140F8ABC8 = (__int64)IopPortBacktrackAllocation;
  qword_140F8AB38 = (__int64)IopGenericUnpackRequirement;
  qword_140F8AB40 = (__int64)IopGenericPackResource;
  qword_140F8AB48 = (__int64)IopGenericUnpackResource;
  qword_140F8AB50 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootPortArbiter, a2, 1, (__int64)L"RootPort");
}
