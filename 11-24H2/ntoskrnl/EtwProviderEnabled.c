/*
 * XREFs of EtwProviderEnabled @ 0x1403D47F0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1403D32E4 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1403D3EBC (EtwpLogMemNodeInfo.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogAllocExecVm @ 0x1408DE328 (EtwTiLogAllocExecVm.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093A5E4 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1409A3CD0 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FBC80 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTraceWorkingSetSwap @ 0x140A06D04 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogSetContextThread @ 0x140A260A0 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x140A469E0 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4D00C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A61AE0 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A690F0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A817A4 (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A905B4 (EtwTiLogDriverObjectUnLoad.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  unsigned __int8 v3; // dl
  __int64 v4; // r8
  __int64 v5; // r9

  return RegHandle
      && (EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword)
       || *(_WORD *)(v5 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v3, v4));
}
