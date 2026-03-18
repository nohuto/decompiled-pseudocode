/*
 * XREFs of IopDmaInitialize @ 0x14071A254
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1406F96D4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  qword_140F8A878 = (__int64)IopIrqUnpackRequirement;
  qword_140F8A880 = (__int64)IopDmaPackResource;
  qword_140F8A888 = (__int64)IopDmaUnpackResource;
  qword_140F8A890 = (__int64)IopDmaScoreRequirement;
  qword_140F8A910 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA");
}
