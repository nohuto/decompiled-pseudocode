/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140467AC0
 * Callers:
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC0C4 (EtwTimLogProhibitLowILImageMap.c)
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
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140AD9A3C (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
