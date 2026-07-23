/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14045F510
 * Callers:
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
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
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
