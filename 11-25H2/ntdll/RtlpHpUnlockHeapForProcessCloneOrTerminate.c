/*
 * XREFs of RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x180095CA0
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800950E0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F5658 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011DC50 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(__int64 a1, int a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  volatile signed __int64 *v9; // rcx

  RtlpHpLfhContextLockUnlock(a1 + 832);
  RtlpHpVsContextLockUnlock(a1 + 704, (unsigned int)a2);
  v4 = (volatile signed __int64 *)(a1 + 232);
  v5 = 2LL;
  if ( a2 >= 2 )
    *v4 = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 >= 2 )
  {
    v6 = 2LL;
    v7 = (_QWORD *)(a1 + 432);
    do
    {
      *v7 = 1LL;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 432));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 624));
  if ( a2 < 2 )
  {
    v9 = (volatile signed __int64 *)(a1 + 64);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 384);
    do
    {
      *v8 = 1LL;
      v8 += 24;
      --v5;
    }
    while ( v5 );
    v9 = (volatile signed __int64 *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = 1LL;
  }
  RtlReleaseSRWLockExclusive(v9);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 384));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 576));
}
