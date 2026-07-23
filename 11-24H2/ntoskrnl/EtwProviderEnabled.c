/*
 * XREFs of EtwProviderEnabled @ 0x140262770
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140261E3C (EtwpLogMemNodeInfo.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140262B38 (EtwTiLogInsertQueueUserApc.c)
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1408AC660 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogAllocExecVm @ 0x140914EE4 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectLoad @ 0x1409B93E8 (EtwTiLogDriverObjectLoad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409F49C0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogSuspendResumeThread @ 0x140A0D004 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSetContextThread @ 0x140A1AB28 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x140A3C950 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A43B9C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A5A3D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A624A0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8CCB0 (EtwTiLogDriverObjectUnLoad.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  return RegHandle
      && ((unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword, RegHandle)
       || *(_WORD *)(v5 + 102) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v3, v4, v5));
}
