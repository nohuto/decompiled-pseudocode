/*
 * XREFs of PfFbBufferListFlushStandby @ 0x140473B84
 * Callers:
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     PfpFlushEventBuffers @ 0x140971A8C (PfpFlushEventBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbBufferListFlushStandby(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rsi

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)a2) )
  {
    v4 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a2 + 32));
    while ( v4 )
    {
      v5 = v4;
      v4 = v4->Next;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)a2) )
        guard_dispatch_icall_no_overrides(a1, v5);
      else
        PfFbBufferListInsertInFree((PEX_RUNDOWN_REF)a2, v5, 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)a2);
  }
}
