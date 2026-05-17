/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x18000AF44
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180033290 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x1800B881C (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18000AFF0 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpSegLfhVsFree @ 0x18000B0B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // rcx

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v5 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v5 )
    RtlpHpLfhContextUpdateFreeCommitCount(
      a1,
      a2,
      -(__int64)((unsigned __int64)(unsigned int)(v5 << 12 << *(_BYTE *)(a2 + 38)) >> 12));
  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16));
  v7 = HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38);
  v8 = *(_QWORD *)a1;
  if ( v6 == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v8, a2, v7);
  else
    return v6(v8, a2, v7);
}
