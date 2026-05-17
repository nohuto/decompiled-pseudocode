/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x1800A4A18
 * Callers:
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800422B0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800944B4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800A4ADC (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800A4E8C (RtlpHpLfhContextLockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, int a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  volatile signed __int64 *v8; // rcx

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
    v8 = (volatile signed __int64 *)(a1 + 128);
LABEL_11:
    *v8 = 1LL;
    return RtlReleaseSRWLockExclusive(v8);
  }
  if ( !a2 )
    return RtlpHpLfhContextLockExtension(a1);
  v8 = (volatile signed __int64 *)(a1 + 128);
  if ( a2 >= 2 )
    goto LABEL_11;
  return RtlReleaseSRWLockExclusive(v8);
}
