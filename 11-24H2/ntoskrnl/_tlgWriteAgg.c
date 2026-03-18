/*
 * XREFs of _tlgWriteAgg @ 0x1403D06F8
 * Callers:
 *     MiLogPeriodicTelemetry @ 0x1402D2E24 (MiLogPeriodicTelemetry.c)
 *     CmpThreadInfoLogStack @ 0x1404BECC0 (CmpThreadInfoLogStack.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x140581220 (FsRtlpOplockAckTimeoutWorker.c)
 *     MiLogSlabEntriesDemote @ 0x14068857C (MiLogSlabEntriesDemote.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     CmpBounceContextStart @ 0x14097A220 (CmpBounceContextStart.c)
 *     HvAnalyzeLogFiles @ 0x140983108 (HvAnalyzeLogFiles.c)
 *     HvpIsReadErrorTransient @ 0x140983744 (HvpIsReadErrorTransient.c)
 *     PnpTraceSetDevNodeProblem @ 0x14098FAB8 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x1409C5844 (PnpTraceClearDevNodeProblem.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409ED190 (FsRtlCheckOplockForFsFilterCallback.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409F39DC (EtwpUpdateGuidEnableInfo.c)
 *     PnpTraceInterruptConnection @ 0x140A12390 (PnpTraceInterruptConnection.c)
 *     MiLogPinDriverAddressesWorker @ 0x140A350F0 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x140A351F4 (MiLogPinDriverAddress.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A82C88 (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB8AB4 (PnpTraceDmaGuardDevicePolicy.c)
 * Callees:
 *     TlgAggregateAbsorbEvent @ 0x1403D078C (TlgAggregateAbsorbEvent.c)
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
