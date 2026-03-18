/*
 * XREFs of MiUnmapReturnSystemCommit @ 0x140A23170
 * Callers:
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnSystemCommit(__int64 a1, __int64 a2)
{
  MiReturnCommit(a1, *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 8), 0);
}
