/*
 * XREFs of _tlgWriteAgg @ 0x140273698
 * Callers:
 *     MiLogPeriodicTelemetry @ 0x14035409C (MiLogPeriodicTelemetry.c)
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0 (FsRtlpOplockAckTimeoutWorker.c)
 *     MiLogSlabEntriesDemote @ 0x1406896AC (MiLogSlabEntriesDemote.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 *     HvpIsReadErrorTransient @ 0x14096BF54 (HvpIsReadErrorTransient.c)
 *     PnpTraceSetDevNodeProblem @ 0x14097AAF0 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x140981A48 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceInterruptConnection @ 0x1409C07A0 (PnpTraceInterruptConnection.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E7D3C (EtwpUpdateGuidEnableInfo.c)
 *     MiLogPinDriverAddressesWorker @ 0x140A29100 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x140A29204 (MiLogPinDriverAddress.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A7D7A8 (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB2F78 (PnpTraceDmaGuardDevicePolicy.c)
 * Callees:
 *     TlgAggregateAbsorbEvent @ 0x140274154 (TlgAggregateAbsorbEvent.c)
 */

__int64 __fastcall tlgWriteAgg(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8[0] = *a2 << 24;
  v8[1] = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  v9 = v5;
  *(_QWORD *)a5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a5 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a5 + 16) = v6;
  *(_DWORD *)(a5 + 12) = 2;
  *(_DWORD *)(a5 + 24) = *v6;
  *(_DWORD *)(a5 + 28) = 1;
  return TlgAggregateAbsorbEvent(a1, v8, a4);
}
