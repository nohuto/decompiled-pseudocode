/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800F5810
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F571C (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, volatile signed __int32 **a2, int a3)
{
  volatile signed __int32 *i; // rbx
  __int64 result; // rax

  for ( i = *a2; i != (volatile signed __int32 *)a2; i = *(volatile signed __int32 **)i )
  {
    if ( *((_BYTE *)i + 39) != 1 )
    {
      if ( a3 < 1 )
      {
        result = (__int64)RtlAcquireSRWLockExclusive(i + 14);
      }
      else
      {
        if ( a3 >= 2 )
          *((_QWORD *)i + 7) = 1LL;
        result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)i + 7);
      }
    }
  }
  return result;
}
