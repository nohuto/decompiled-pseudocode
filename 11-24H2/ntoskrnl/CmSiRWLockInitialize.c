/*
 * XREFs of CmSiRWLockInitialize @ 0x140AB8200
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AAF60 (SleepstudyHelperCreateLibraryEx.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1405EF818 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlHpHeapManagerInitialize @ 0x1405EFDE0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x140C180F8 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140C364B0 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     CmFcManagerInitialize @ 0x140C4EFE8 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
