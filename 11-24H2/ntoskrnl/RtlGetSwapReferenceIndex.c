/*
 * XREFs of RtlGetSwapReferenceIndex @ 0x140A8A718
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSwapReferenceIndex(_QWORD *a1)
{
  return *a1 & 1LL;
}
