/*
 * XREFs of NvmeNamespaceQueueIo @ 0x14011D6B0
 * Callers:
 *     NvmeProcessIoForResetRecovery @ 0x1400F9F34 (NvmeProcessIoForResetRecovery.c)
 *     NvmeNamespaceQueueRequest @ 0x14010AF34 (NvmeNamespaceQueueRequest.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x14011C250 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 * Callees:
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall NvmeNamespaceQueueIo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  unsigned __int8 *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v13 = 0LL;
  *(_BYTE *)(v3 + 3) |= 1u;
  v6 = a3;
  if ( (int)IoGetIoAttributionHandle(a2, &v13) >= 0 )
  {
    v7 = *(unsigned __int8 **)(a2 + 184);
    v8 = v13;
    v14 = 0LL;
    LODWORD(v14) = 1;
    v15 = 0LL;
    DWORD1(v14) = *v7 | 0x300;
    *((_QWORD *)&v15 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v15 + 1);
    IoRecordIoAttribution(v8, &v14);
  }
  StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  _InterlockedOr(v12, 0);
  LODWORD(v9) = _InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 256) + 8 * v6 + 64), 1, 0);
  if ( !(_DWORD)v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 952LL));
    v10 = *(_QWORD *)(a1 + 16);
    if ( !*(_QWORD *)(v10 + 1288) || (v9 = *(_DWORD **)(v10 + 1288), !*v9) )
    {
      LODWORD(v9) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 128LL),
                      1,
                      0);
      if ( !(_DWORD)v9 )
        LOBYTE(v9) = KeSetTimer(
                       *(PKTIMER *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 16LL),
                       (LARGE_INTEGER)-600LL,
                       *(PKDPC *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 8LL));
    }
  }
  return (char)v9;
}
