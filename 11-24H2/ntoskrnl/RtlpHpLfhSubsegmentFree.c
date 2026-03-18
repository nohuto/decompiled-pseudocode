/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x1402B4ED8
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x1406069A8 (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x1402B41B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1402B4F80 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1402B93D8 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpLfhSubsegmentFree(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rcx

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v5 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v5 )
    RtlpHpLfhContextUpdateFreeCommitCount(
      a1,
      a2,
      -(__int64)((unsigned __int64)(unsigned int)(v5 << 12 << *(_BYTE *)(a2 + 38)) >> 12));
  v7 = *a1;
  if ( (void (__fastcall *)(__int64, ULONG_PTR))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[2]) == RtlpHpSegLfhVsFree )
    RtlpHpSegLfhVsFree(v7, a2);
  else
    guard_dispatch_icall_no_overrides(v7, a2, HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38), v6);
}
