/*
 * XREFs of CmSiRWLockInitialize @ 0x140ABABF0
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AF960 (SleepstudyHelperCreateLibraryEx.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1405E5E88 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlHpHeapManagerInitialize @ 0x1405E6450 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x140C05058 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140C230A4 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     CmFcManagerInitialize @ 0x140C3BB50 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
