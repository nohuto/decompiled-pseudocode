/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1403D4B94
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1403D32E4 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB488 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407AB8A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC0C4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC420 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogAllocExecVm @ 0x1408DE328 (EtwTiLogAllocExecVm.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093A5E4 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x140A260A0 (EtwTiLogSetContextThread.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A34924 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogMapExecView @ 0x140A469E0 (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A61AE0 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140AA26E8 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140AD9A3C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 464;
  a1[2] = a2 + 504;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[4] = a3;
  a1[5] = 8LL;
  a1[6] = a2 + 1528;
  a1[7] = 1LL;
  a1[8] = a2 + 1529;
  a1[9] = 1LL;
  a1[10] = a2 + 1530;
  result = 6LL;
  a1[11] = 1LL;
  return result;
}
