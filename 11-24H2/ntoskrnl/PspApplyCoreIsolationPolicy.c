/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x1407767F8
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405C2120 (KeEnableCoreIsolationMitigationPolicyThread.c)
 */

__int64 __fastcall PspApplyCoreIsolationPolicy(__int64 a1)
{
  _QWORD *i; // rbx

  PspLockProcessShared(a1, (__int64)KeGetCurrentThread());
  _m_prefetchw((const void *)(a1 + 2008));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u) & 1) == 0 )
  {
    for ( i = *(_QWORD **)(a1 + 880); i != (_QWORD *)(a1 + 880); i = (_QWORD *)*i )
      KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)(i - 175));
  }
  return PspUnlockProcessShared(a1);
}
