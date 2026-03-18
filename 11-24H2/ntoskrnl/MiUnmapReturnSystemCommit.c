/*
 * XREFs of MiUnmapReturnSystemCommit @ 0x140A2C120
 * Callers:
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnSystemCommit(__int64 a1, __int64 a2)
{
  MiReturnCommit(a1, *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 8), 0);
}
