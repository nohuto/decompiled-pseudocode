/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800D6544
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800D6450 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, _RTL_SRWLOCK **a2, int a3)
{
  _RTL_SRWLOCK *i; // rbx

  for ( i = *a2; i != (_RTL_SRWLOCK *)a2; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( HIBYTE(i[4].Ptr) != 1 )
    {
      if ( a3 < 1 )
      {
        RtlAcquireSRWLockExclusive(i + 7);
      }
      else
      {
        if ( a3 >= 2 )
          i[7].Value = 1LL;
        RtlReleaseSRWLockExclusive(i + 7);
      }
    }
  }
}
