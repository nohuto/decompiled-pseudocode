/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x18009DA90
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18009D1E0 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // rax

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Value; ; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( i == &SRWLock[1] )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      return 0;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
      break;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return 1;
}
