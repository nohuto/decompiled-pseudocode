/*
 * XREFs of MiReplenishLocalCommit @ 0x140427BF0
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 * Callees:
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     MiUpdateCommitCounts @ 0x140427C9C (MiUpdateCommitCounts.c)
 */

unsigned __int64 __fastcall MiReplenishLocalCommit(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 i; // rdx
  unsigned __int64 v9; // r8

  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 19264), a3 + a4, a3);
  if ( a3 == result )
  {
    MiUpdateCommitCounts(a1, a3, a4, 0LL);
    _m_prefetchw((const void *)(a2 + 35736));
    for ( i = *(unsigned int *)(a2 + 35736); (unsigned __int64)(i + a4) <= 0x200; i = (int)result )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 35736), i + a4, i);
      if ( (int)result == i )
        return result;
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), -a4);
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19264), -a4);
    return MiSignalCommitSignals(a1, v9 - a4, v9);
  }
  return result;
}
