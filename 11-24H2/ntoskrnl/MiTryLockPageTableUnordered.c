/*
 * XREFs of MiTryLockPageTableUnordered @ 0x140355AB0
 * Callers:
 *     MiLockActivePageTableInList @ 0x14039094C (MiLockActivePageTableInList.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1403560C0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiTryLockPageTableUnordered(__int64 a1, __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 1LL);
}
