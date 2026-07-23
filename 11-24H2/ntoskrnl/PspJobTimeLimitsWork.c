/*
 * XREFs of PspJobTimeLimitsWork @ 0x14085CBF0
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x14085D2AC (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
    if ( (_InterlockedAnd(&PspJobTimeLimitsWorkItemFlags, 0xFFFFFFFC) & 1) != 0 )
    {
      v1 = 0LL;
      v0 = 1;
    }
    else
    {
      v1 = 1LL;
    }
    PspEnforceLimits(v1);
    result = (unsigned int)_InterlockedCompareExchange(&PspJobTimeLimitsWorkItemFlags, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
  {
    result = (unsigned int)PspJobTimeLimitsPeriodSeconds;
    PspJobTimeLimitsCount = PspJobTimeLimitsPeriodSeconds;
  }
  return result;
}
