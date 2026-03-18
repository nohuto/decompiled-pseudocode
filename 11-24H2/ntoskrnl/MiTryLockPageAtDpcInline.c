/*
 * XREFs of MiTryLockPageAtDpcInline @ 0x1404251B0
 * Callers:
 *     MiSetPageZeroInProgress @ 0x14041E500 (MiSetPageZeroInProgress.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTryLockPageAtDpcInline(__int64 a1)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL);
}
