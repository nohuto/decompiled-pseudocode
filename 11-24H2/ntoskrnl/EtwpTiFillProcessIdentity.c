/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1402633C0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140262B38 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB958 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407ABD74 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC8F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogAllocExecVm @ 0x140914EE4 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x140A0D004 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSetContextThread @ 0x140A1AB28 (EtwTiLogSetContextThread.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A28934 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogMapExecView @ 0x140A3C950 (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A5A3D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
