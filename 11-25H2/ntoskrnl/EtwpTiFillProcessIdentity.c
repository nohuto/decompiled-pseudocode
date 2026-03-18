/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1403BCF74
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1403BD008 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x14079C0B8 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14079C4D4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14079CCF4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x14079D050 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408A5C84 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409BA384 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogAllocExecVm @ 0x140A012C4 (EtwTiLogAllocExecVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A0D588 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSetContextThread @ 0x140A1A8D4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x140A42770 (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A60384 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9CEE8 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ACEE4C (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
