/*
 * XREFs of inflateReset @ 0x18015270C
 * Callers:
 *     inflateReset2 @ 0x180152740 (inflateReset2.c)
 * Callees:
 *     inflateStateCheck @ 0x18015286C (inflateStateCheck.c)
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
