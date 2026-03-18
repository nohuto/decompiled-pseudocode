/*
 * XREFs of MiTryLockPageAtDpcInline @ 0x14042E9B0
 * Callers:
 *     MiSetPageZeroInProgress @ 0x1404328F0 (MiSetPageZeroInProgress.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTryLockPageAtDpcInline(__int64 a1)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL);
}
