/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x140776A18
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BF6F0 (KeEnableCoreIsolationMitigationPolicyThread.c)
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
