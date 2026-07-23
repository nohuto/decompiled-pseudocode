/*
 * XREFs of MiSafeTryLockNestedPageAtDpc @ 0x140485350
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x140332A40 (MiLockMultipleZeroChunks.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiSafeTryLockNestedPageAtDpc(ULONG_PTR a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = 0;
  if ( a1 > qword_140E2DD20 && !MiIsDecayPfn(a1) )
    return 0LL;
  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_QWORD *)(v2 + 40) & 0x40000000000000LL) == 0 )
    return 0LL;
  LOBYTE(v1) = !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL);
  return v1;
}
