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

void __fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(_RTL_SRWLOCK *a1, int a2)
{
  _RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rax
  _RTL_SRWLOCK *v9; // rcx

  RtlpHpLfhContextLockUnlock(&a1[104]);
  RtlpHpVsContextLockUnlock(&a1[88], (unsigned int)a2);
  v4 = a1 + 29;
  v5 = 2LL;
  if ( a2 >= 2 )
    v4->Value = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 >= 2 )
  {
    v6 = 2LL;
    v7 = (unsigned __int64 *)&a1[54];
    do
    {
      *v7 = 1LL;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive(a1 + 54);
  RtlReleaseSRWLockExclusive(a1 + 78);
  if ( a2 < 2 )
  {
    v9 = a1 + 8;
  }
  else
  {
    v8 = (unsigned __int64 *)&a1[48];
    do
    {
      *v8 = 1LL;
      v8 += 24;
      --v5;
    }
    while ( v5 );
    v9 = a1 + 8;
    a1[8].Value = 1LL;
  }
  RtlReleaseSRWLockExclusive(v9);
  RtlReleaseSRWLockExclusive(a1 + 48);
  RtlReleaseSRWLockExclusive(a1 + 72);
}
