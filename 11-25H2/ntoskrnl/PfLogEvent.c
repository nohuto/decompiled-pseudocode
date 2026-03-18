/*
 * XREFs of PfLogEvent @ 0x140324B30
 * Callers:
 *     PfHardFaultLog @ 0x14020994C (PfHardFaultLog.c)
 *     PfLogFileDataAccess @ 0x140301920 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403BE89C (PfLogForegroundProcess.c)
 *     PfpRpLogDeprioEvent @ 0x14048193C (PfpRpLogDeprioEvent.c)
 *     PfpPartitionLogEventCallback @ 0x14049EE90 (PfpPartitionLogEventCallback.c)
 *     PfpLogScenarioEventCallback @ 0x140739AF0 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140AA366C (PfpLogEventRequest.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B4AF30 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     PfpEventHandleFullBuffer @ 0x1403240C0 (PfpEventHandleFullBuffer.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall PfLogEvent(__int64 a1, int a2, int a3, const void *a4, size_t Size)
{
  __int64 v5; // rdi
  unsigned int v7; // ebp
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // r9
  _SLIST_ENTRY *Next; // rdi
  int v11; // ebx

  v5 = a1 + 416;
  v7 = (Size + 31) & 0xFFFFFFF0;
  while ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v5) )
  {
    while ( 1 )
    {
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 32));
      if ( v8 )
        break;
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16));
      if ( v8 )
        break;
      v11 = guard_dispatch_icall_no_overrides(a1, v5);
      if ( v11 < 0 )
        goto LABEL_14;
    }
    v9 = *((_QWORD *)&v8[1].Next + 1);
    if ( v7 <= (__int64)v8[2].Next - v9 )
    {
      *(_DWORD *)(v9 + 8) = a3;
      *(_QWORD *)v9 = (a2 << 12) & 0x1F000 ^ (((unsigned __int64)v7 >> 2) & 0xFFC ^ (*(_QWORD *)v9 & 0xFFFFFFFFFFFE0000uLL | 3) | 0x20000);
      memmove((void *)(v9 + 16), a4, (unsigned int)Size);
      Next = v8[1].Next;
      if ( v7
        && (*((_QWORD *)&v8[1].Next + 1) += v7,
            ++*((_DWORD *)&v8[2].Next + 2),
            (__int64)v8[2].Next - *((_QWORD *)&v8[1].Next + 1) < SHIDWORD(Next[5].Next)) )
      {
        if ( *((unsigned int (__fastcall **)(__int64))&Next[6].Next + 1) == PfpEventHandleFullBuffer )
          PfpEventHandleFullBuffer(a1);
        else
          guard_dispatch_icall_no_overrides(a1, v8);
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v8);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
      }
      return 0;
    }
    if ( !*((_DWORD *)&v8[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 16), v8);
      v11 = -1073741789;
LABEL_14:
      ++*(_DWORD *)(v5 + 116);
      *(_DWORD *)(v5 + 120) += v7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v5);
      goto LABEL_16;
    }
    guard_dispatch_icall_no_overrides(a1, v8);
  }
  v11 = -1073741431;
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return (unsigned int)v11;
}
