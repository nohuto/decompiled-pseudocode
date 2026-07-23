/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x1403D996C
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x140603FE8 (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1403D9A14 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpLfhSubsegmentFree(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v5 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v5 )
    RtlpHpLfhContextUpdateFreeCommitCount(
      a1,
      a2,
      -(__int64)((unsigned __int64)(unsigned int)(v5 << 12 << *(_BYTE *)(a2 + 38)) >> 12));
  v6 = *a1;
  if ( (void (__fastcall *)(__int64, ULONG_PTR))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[2]) == RtlpHpSegLfhVsFree )
    RtlpHpSegLfhVsFree(v6, a2);
  else
    guard_dispatch_icall_no_overrides(v6, a2);
}
