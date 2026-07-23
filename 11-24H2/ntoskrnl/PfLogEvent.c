/*
 * XREFs of PfLogEvent @ 0x14020DB78
 * Callers:
 *     PfLogFileDataAccess @ 0x14022A610 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1402629EC (PfLogForegroundProcess.c)
 *     PfHardFaultLog @ 0x1403512E8 (PfHardFaultLog.c)
 *     PfpRpLogDeprioEvent @ 0x14047D954 (PfpRpLogDeprioEvent.c)
 *     PfpPartitionLogEventCallback @ 0x140498D70 (PfpPartitionLogEventCallback.c)
 *     PfpLogScenarioEventCallback @ 0x140743E00 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5CF10 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PfpEventHandleFullBuffer @ 0x14020E610 (PfpEventHandleFullBuffer.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall PfLogEvent(__int64 a1, int a2, int a3, const void *a4, size_t Size)
{
  __int64 v5; // rdi
  unsigned int v7; // ebp
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  _SLIST_ENTRY *Next; // rdi
  int v14; // ebx
  __int64 v16; // r9

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
      v14 = guard_dispatch_icall_no_overrides(a1, v5, v9, v16);
      if ( v14 < 0 )
        goto LABEL_14;
    }
    v10 = *((_QWORD *)&v8[1].Next + 1);
    if ( v7 <= (__int64)v8[2].Next - v10 )
    {
      *(_DWORD *)(v10 + 8) = a3;
      *(_QWORD *)v10 = (a2 << 12) & 0x1F000 ^ (((unsigned __int64)v7 >> 2) & 0xFFC ^ (*(_QWORD *)v10 & 0xFFFFFFFFFFFE0000uLL | 3) | 0x20000);
      memmove((void *)(v10 + 16), a4, (unsigned int)Size);
      Next = v8[1].Next;
      if ( v7
        && (*((_QWORD *)&v8[1].Next + 1) += v7,
            ++*((_DWORD *)&v8[2].Next + 2),
            (__int64)v8[2].Next - *((_QWORD *)&v8[1].Next + 1) < SHIDWORD(Next[5].Next)) )
      {
        if ( *((__int64 (__fastcall **)(_QWORD, _QWORD))&Next[6].Next + 1) == PfpEventHandleFullBuffer )
          PfpEventHandleFullBuffer(a1, v8);
        else
          guard_dispatch_icall_no_overrides(a1, v8, v11, v12);
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
      v14 = -1073741789;
LABEL_14:
      ++*(_DWORD *)(v5 + 116);
      *(_DWORD *)(v5 + 120) += v7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v5);
      goto LABEL_16;
    }
    guard_dispatch_icall_no_overrides(a1, v8, v9, v10);
  }
  v14 = -1073741431;
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return (unsigned int)v14;
}
