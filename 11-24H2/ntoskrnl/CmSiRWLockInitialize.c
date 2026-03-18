/*
 * XREFs of CmSiRWLockInitialize @ 0x140ABD190
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404B06D0 (SleepstudyHelperCreateLibraryEx.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1405F21D8 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlHpHeapManagerInitialize @ 0x1405F27A0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x140C160F8 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140C34370 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     CmFcManagerInitialize @ 0x140C4CE4C (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
