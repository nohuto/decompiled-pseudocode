/*
 * XREFs of MiTryLockPageTableUnordered @ 0x1403DC2F0
 * Callers:
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiTryLockPageTableUnordered(__int64 a1, __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 1LL);
}
