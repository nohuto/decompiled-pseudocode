/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800A4BD0
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800A4ADC (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  int i; // esi
  __int64 result; // rax

  v3 = *a2;
  for ( i = a3; v3 != (volatile signed __int32 *)a2; v3 = *(volatile signed __int32 **)v3 )
  {
    if ( *((_BYTE *)v3 + 39) != 1 )
    {
      if ( i < 1 )
      {
        result = (__int64)RtlAcquireSRWLockExclusive(v3 + 14, a2, a3);
      }
      else
      {
        if ( i >= 2 )
          *((_QWORD *)v3 + 7) = 1LL;
        result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3 + 7);
      }
    }
  }
  return result;
}
