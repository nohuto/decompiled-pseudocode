/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1404775E4
 * Callers:
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x14094F57C (PfpFlushEventBuffers.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbBufferListFlushStandby(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)a2) )
  {
    v4 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a2 + 32));
    while ( v4 )
    {
      v5 = v4;
      v4 = v4->Next;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)a2) )
        guard_dispatch_icall_no_overrides(a1, v5, v6, v7);
      else
        PfFbBufferListInsertInFree((PEX_RUNDOWN_REF)a2, v5, 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)a2);
  }
}
