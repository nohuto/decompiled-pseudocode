/*
 * XREFs of EtwpExpandedStackWalk @ 0x140231720
 * Callers:
 *     <none>
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 */

ULONG __fastcall EtwpExpandedStackWalk(__int64 a1)
{
  ULONG result; // eax

  result = RtlWalkFrameChain(*(PVOID **)a1, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
