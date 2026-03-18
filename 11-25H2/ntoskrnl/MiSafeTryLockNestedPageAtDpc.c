/*
 * XREFs of MiSafeTryLockNestedPageAtDpc @ 0x14020DCB8
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020F970 (MiLockMultipleZeroChunks.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiSafeTryLockNestedPageAtDpc(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx

  v2 = 0;
  if ( a1 > qword_140E2D9A0 && !(unsigned int)MiIsDecayPfn(a1, a2, 0LL) )
    return 0LL;
  v3 = 48 * a1 - 0x220000000000LL;
  if ( (*(_QWORD *)(v3 + 40) & 0x40000000000000LL) == 0 )
    return 0LL;
  LOBYTE(v2) = !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL);
  return v2;
}
