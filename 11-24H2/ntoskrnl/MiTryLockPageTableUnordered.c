/*
 * XREFs of MiTryLockPageTableUnordered @ 0x1402D4830
 * Callers:
 *     MiLockActivePageTableInList @ 0x1403CF89C (MiLockActivePageTableInList.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402D4E40 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiTryLockPageTableUnordered(__int64 a1, __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 1LL);
}
