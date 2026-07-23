/*
 * XREFs of MiComputePreferredNode @ 0x14026AF48
 * Callers:
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiThreadIdealNode @ 0x14026AF90 (MiThreadIdealNode.c)
 */

__int64 __fastcall MiComputePreferredNode(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax

  v2 = *(_DWORD *)(a2 + 48);
  v3 = (v2 >> 12) & 0x7F;
  if ( v3 )
    return (unsigned int)(v3 - 1);
  if ( (v2 & 0x200000) == 0 && (v3 = (*(_DWORD *)(**(_QWORD **)(a2 + 72) + 56LL) >> 20) & 0x7F) != 0 )
    return (unsigned int)(v3 - 1);
  else
    return MiThreadIdealNode(a1, 0LL);
}
