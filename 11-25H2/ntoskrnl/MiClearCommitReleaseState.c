/*
 * XREFs of MiClearCommitReleaseState @ 0x14065E11C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  unsigned __int8 v2; // al

  v2 = MiLockWorkingSetExclusive(a1);
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(a1, v2);
}
