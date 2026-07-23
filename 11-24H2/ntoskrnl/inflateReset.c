/*
 * XREFs of inflateReset @ 0x1405F268C
 * Callers:
 *     inflateReset2 @ 0x1405F26BC (inflateReset2.c)
 * Callees:
 *     inflateResetKeep @ 0x1405F2758 (inflateResetKeep.c)
 *     inflateStateCheck @ 0x1405F27E8 (inflateStateCheck.c)
 */

__int64 inflateReset()
{
  __int64 v0; // rcx
  __int64 v2; // rax

  if ( (unsigned int)inflateStateCheck() )
    return 4294967294LL;
  v2 = *(_QWORD *)(v0 + 40);
  *(_QWORD *)(v2 + 52) = 0LL;
  *(_DWORD *)(v2 + 60) = 0;
  return inflateResetKeep();
}
