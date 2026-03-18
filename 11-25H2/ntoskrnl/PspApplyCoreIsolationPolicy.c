/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x140766E28
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BE118 (KeEnableCoreIsolationMitigationPolicyThread.c)
 */

__int64 __fastcall PspApplyCoreIsolationPolicy(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared(a1, (__int64)CurrentThread);
  _m_prefetchw((const void *)(a1 + 2008));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u) & 1) == 0 )
  {
    for ( i = *(_QWORD **)(a1 + 880); i != (_QWORD *)(a1 + 880); i = (_QWORD *)*i )
      KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)(i - 175));
  }
  return PspUnlockProcessShared(a1, (__int64)CurrentThread);
}
