/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x1800D6450
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x1800D638C (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800D6450 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800D6450 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800D6544 (RtlpHpLfhOwnerListLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  _RTL_SRWLOCK *v3; // rbx
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  unsigned int i; // r8d
  __int64 v10; // rax

  v3 = a2 + 2;
  if ( !a3 )
    RtlAcquireSRWLockExclusive(a2 + 2);
  RtlpHpLfhOwnerListLockUnlock(a1, &a2[3], (unsigned int)a3);
  RtlpHpLfhOwnerListLockUnlock(v7, &a2[5], (unsigned int)a3);
  if ( (*(_BYTE *)&a2->0 & 1) != 0 )
  {
    v8 = *(_WORD *)(a1 + 2 * ((unsigned __int64)LOBYTE(a2->Value) >> 1) + 1472);
    if ( a3 == 3 )
    {
      for ( i = 1;
            i < *(unsigned __int8 *)(a1 + 64);
            *(_WORD *)(a1 + 2 * ((v10 << 7) + ((unsigned __int64)LOBYTE(a2->Value) >> 1)) + 1472) = v8 )
      {
        v10 = i++;
      }
      *((_BYTE *)&a2->0 + 1) = 1;
      v3 = a2 + 2;
      *(_BYTE *)&a2[13].0 = 0;
    }
    RtlpHpLfhOwnerLockUnlock(a1, a1 + ((unsigned __int64)v8 << 6), (unsigned int)a3);
  }
  if ( a3 >= 1 )
  {
    if ( a3 >= 2 )
    {
      v3 = a2 + 2;
      a2[2].Value = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
  }
}
