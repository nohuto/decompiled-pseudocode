/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14046931C
 * Callers:
 *     EtwTimLogProhibitLowILImageMap @ 0x14079CCF4 (EtwTimLogProhibitLowILImageMap.c)
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
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ACEE4C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 1296;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 1216;
  result = 2LL;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
