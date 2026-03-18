/*
 * XREFs of EtwpExpandedStackWalk @ 0x14027C190
 * Callers:
 *     <none>
 * Callees:
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 */

ULONG __fastcall EtwpExpandedStackWalk(__int64 a1)
{
  ULONG result; // eax

  result = RtlWalkFrameChain(*(PVOID **)a1, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
