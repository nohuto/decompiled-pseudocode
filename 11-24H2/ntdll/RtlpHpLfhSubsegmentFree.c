/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x18004F304
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004E6E0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhOwnerCleanup @ 0x18008F49C (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004F3B0 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpSegLfhVsFree @ 0x18004F470 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180056220 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
