/*
 * XREFs of PfLogEvent @ 0x140245398
 * Callers:
 *     PfLogFileDataAccess @ 0x140275080 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x140398B98 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x1403D4840 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403D4A6C (PfLogForegroundProcess.c)
 *     PfpRpLogDeprioEvent @ 0x14048275C (PfpRpLogDeprioEvent.c)
 *     PfpPartitionLogEventCallback @ 0x14049DF70 (PfpPartitionLogEventCallback.c)
 *     PfpLogScenarioEventCallback @ 0x140745B10 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140AA86F4 (PfpLogEventRequest.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5AEA0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PfpEventHandleFullBuffer @ 0x140245E30 (PfpEventHandleFullBuffer.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v5 = a1 + 416;
  v7 = (Size + 31) & 0xFFFFFFF0;
  while ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v5) )
  {
    while ( 1 )
    {
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 32));
      if ( v8 )
        break;
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16));
      if ( v8 )
        break;
      v14 = guard_dispatch_icall_no_overrides(a1, v5, v9, v16, v17, v18, v19, v20);
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
          guard_dispatch_icall_no_overrides(a1, v8, v11, v12, v17, v18, v19, v20);
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
    guard_dispatch_icall_no_overrides(a1, v8, v9, v10, v17, v18, v19, v20);
  }
  v14 = -1073741431;
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return (unsigned int)v14;
}
