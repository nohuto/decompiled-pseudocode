/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x1800D638C
 * Callers:
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x18009EF68 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800D6080 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18006471C (RtlpHpEnvTlsSetValue.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800D6450 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800D6800 (RtlpHpLfhContextLockExtension.c)
 */

void __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, int a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  _RTL_SRWLOCK *v7; // rcx

  v3 = (__int64 *)(a1 + 448);
  v5 = 128LL;
  do
  {
    v6 = 0LL;
    if ( (*v3 & 1) == 0 )
      v6 = *v3;
    if ( v6 )
      RtlpHpLfhOwnerLockUnlock(a1, v6, (unsigned int)a2);
    ++v3;
    --v5;
  }
  while ( v5 );
  if ( a2 == 3 )
  {
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), 196631LL);
    v7 = (_RTL_SRWLOCK *)(a1 + 128);
LABEL_11:
    v7->Value = 1LL;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    RtlpHpLfhContextLockExtension(a1);
    return;
  }
  v7 = (_RTL_SRWLOCK *)(a1 + 128);
  if ( a2 >= 2 )
    goto LABEL_11;
LABEL_12:
  RtlReleaseSRWLockExclusive(v7);
}
