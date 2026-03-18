/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x1403CB82C
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x1405FA668 (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1403C9338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1403CB8D4 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpSegLfhVsFree @ 0x1403CBA30 (RtlpHpSegLfhVsFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(__int64 *a1, __int64 a2, __int64 a3)
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
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[2]) == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v6, a2, HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38));
  else
    return guard_dispatch_icall_no_overrides(v6, a2);
}
