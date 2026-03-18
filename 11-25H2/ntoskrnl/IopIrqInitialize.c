/*
 * XREFs of IopIrqInitialize @ 0x14071A378
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1406F96D4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  qword_140F8A718 = (__int64)IopIrqUnpackRequirement;
  qword_140F8A720 = (__int64)IopIrqPackResource;
  qword_140F8A728 = (__int64)IopIrqUnpackResource;
  qword_140F8A730 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ");
}
