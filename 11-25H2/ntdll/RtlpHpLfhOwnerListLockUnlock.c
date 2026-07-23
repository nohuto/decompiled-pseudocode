/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800F5810
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F571C (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
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
