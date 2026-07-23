/*
 * XREFs of IopDmaInitialize @ 0x140723D64
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  qword_140F8B258 = (__int64)IopIrqUnpackRequirement;
  qword_140F8B260 = (__int64)IopDmaPackResource;
  qword_140F8B268 = (__int64)IopDmaUnpackResource;
  qword_140F8B270 = (__int64)IopDmaScoreRequirement;
  qword_140F8B2F0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA");
}
