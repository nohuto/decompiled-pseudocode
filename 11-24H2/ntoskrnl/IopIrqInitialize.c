/*
 * XREFs of IopIrqInitialize @ 0x140723E88
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  qword_140F8B0F8 = (__int64)IopIrqUnpackRequirement;
  qword_140F8B100 = (__int64)IopIrqPackResource;
  qword_140F8B108 = (__int64)IopIrqUnpackResource;
  qword_140F8B110 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ");
}
