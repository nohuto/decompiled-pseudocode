/*
 * XREFs of RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800422B0
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800416F0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800A4A18 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011C3B8 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(_QWORD *a1, int a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx

  RtlpHpLfhContextLockUnlock(a1 + 104);
  RtlpHpVsContextLockUnlock(a1 + 88, (unsigned int)a2);
  v4 = a1 + 29;
  v5 = 2LL;
  if ( a2 >= 2 )
    *v4 = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 >= 2 )
  {
    v6 = 2LL;
    v7 = a1 + 54;
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
    v8 = a1 + 48;
    do
    {
      *v8 = 1LL;
      v8 += 24;
      --v5;
    }
    while ( v5 );
    v9 = a1 + 8;
    a1[8] = 1LL;
  }
  RtlReleaseSRWLockExclusive(v9);
  RtlReleaseSRWLockExclusive(a1 + 48);
  return RtlReleaseSRWLockExclusive(a1 + 72);
}
