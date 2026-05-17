/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x1800F571C
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x1800F5658 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F571C (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F571C (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800F5810 (RtlpHpLfhOwnerListLockUnlock.c)
 */

__int64 __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned __int8 *a2, int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int16 v9; // r9
  unsigned int i; // r8d
  __int64 v11; // rax

  v3 = (volatile signed __int64 *)(a2 + 16);
  if ( !a3 )
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a2 + 4);
  RtlpHpLfhOwnerListLockUnlock(a1, a2 + 24, (unsigned int)a3);
  result = RtlpHpLfhOwnerListLockUnlock(v7, a2 + 40, (unsigned int)a3);
  if ( (*a2 & 1) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2 * ((unsigned __int64)*a2 >> 1) + 1472);
    if ( a3 == 3 )
    {
      for ( i = 1;
            i < *(unsigned __int8 *)(a1 + 64);
            *(_WORD *)(a1 + 2 * ((v11 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472) = v9 )
      {
        v11 = i++;
      }
      a2[1] = 1;
      v3 = (volatile signed __int64 *)(a2 + 16);
      a2[104] = 0;
    }
    result = RtlpHpLfhOwnerLockUnlock(a1, a1 + ((unsigned __int64)v9 << 6), (unsigned int)a3);
  }
  if ( a3 >= 1 )
  {
    if ( a3 >= 2 )
    {
      v3 = (volatile signed __int64 *)(a2 + 16);
      *((_QWORD *)a2 + 2) = 1LL;
    }
    return RtlReleaseSRWLockExclusive(v3);
  }
  return result;
}
