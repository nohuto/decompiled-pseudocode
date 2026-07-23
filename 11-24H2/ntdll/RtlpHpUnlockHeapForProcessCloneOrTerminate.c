/*
 * XREFs of RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800D6080
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800ACAD4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800D638C (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011A5E8 (RtlpHpVsContextLockUnlock.c)
 */

void __fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(_RTL_SRWLOCK *a1, __int64 a2)
{
  int v3; // esi
  _RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rax
  _RTL_SRWLOCK *v9; // rcx

  v3 = a2;
  RtlpHpLfhContextLockUnlock(&a1[104], a2);
  RtlpHpVsContextLockUnlock(&a1[88], (unsigned int)v3);
  v4 = a1 + 29;
  v5 = 2LL;
  if ( v3 >= 2 )
    v4->Value = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( v3 >= 2 )
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
  if ( v3 < 2 )
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
