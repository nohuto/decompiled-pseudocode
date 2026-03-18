/*
 * XREFs of EtwProviderEnabled @ 0x1403BE620
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1403BD008 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1403BDD4C (EtwpLogMemNodeInfo.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408A5C84 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14099EDE4 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409BA384 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FEA00 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogAllocExecVm @ 0x140A012C4 (EtwTiLogAllocExecVm.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogSetContextThread @ 0x140A1A8D4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x140A42770 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4AA6C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A60384 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A664B0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A7E124 (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8B820 (EtwTiLogDriverObjectUnLoad.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  unsigned __int8 v3; // dl
  __int64 v4; // r8
  __int64 v5; // r9

  return RegHandle
      && (EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword)
       || *(_BYTE *)(v5 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v3, v4));
}
