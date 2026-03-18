/*
 * XREFs of inflateReset @ 0x1405F504C
 * Callers:
 *     inflateReset2 @ 0x1405F507C (inflateReset2.c)
 * Callees:
 *     inflateResetKeep @ 0x1405F5118 (inflateResetKeep.c)
 *     inflateStateCheck @ 0x1405F51A8 (inflateStateCheck.c)
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
