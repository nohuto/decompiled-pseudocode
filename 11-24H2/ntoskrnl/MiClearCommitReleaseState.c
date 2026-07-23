/*
 * XREFs of MiClearCommitReleaseState @ 0x14066AE0C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  unsigned __int8 v2; // al

  v2 = MiLockWorkingSetExclusive(a1);
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(a1, v2);
}
