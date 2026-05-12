/*
 * XREFs of IsNvmeControllerGone @ 0x1400BE914
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsNvmeControllerGone(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x40000000) != 0 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 920) + 40LL);
    if ( !FeatureFixTRIMAddSCSIPassthrough )
      return v1 == -1;
    if ( v1 == -1 )
    {
      *(_BYTE *)(a1 + 1228) = 1;
      return 1;
    }
  }
  return 0;
}
