/*
 * XREFs of PspSetAffinityLimitCallback @ 0x140777F00
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckJobAccessState @ 0x140777834 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspSetAffinityLimitCallback(ULONG_PTR a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 500) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 496) & 1) != 0 )
    return 0LL;
  else
    return PspCheckJobAccessState(a2, a1);
}
