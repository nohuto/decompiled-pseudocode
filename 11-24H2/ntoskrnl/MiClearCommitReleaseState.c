/*
 * XREFs of MiClearCommitReleaseState @ 0x140669C3C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  unsigned __int8 v2; // al

  v2 = MiLockWorkingSetExclusive(a1);
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(a1, v2);
}
