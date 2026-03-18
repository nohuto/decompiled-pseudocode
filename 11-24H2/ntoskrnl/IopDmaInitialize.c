/*
 * XREFs of IopDmaInitialize @ 0x1407261D4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407055B4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  qword_140F8AFF8 = (__int64)IopIrqUnpackRequirement;
  qword_140F8B000 = (__int64)IopDmaPackResource;
  qword_140F8B008 = (__int64)IopDmaUnpackResource;
  qword_140F8B010 = (__int64)IopDmaScoreRequirement;
  qword_140F8B090 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA");
}
