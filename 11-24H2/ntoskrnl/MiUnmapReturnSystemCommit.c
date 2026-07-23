/*
 * XREFs of MiUnmapReturnSystemCommit @ 0x140A20048
 * Callers:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnSystemCommit(__int64 a1, __int64 a2)
{
  MiReturnCommit(a1, *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 8), 0);
}
