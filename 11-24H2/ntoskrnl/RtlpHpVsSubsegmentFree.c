/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x14035CC40
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x14035C0D0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14035C460 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextCleanup @ 0x140604980 (RtlpHpVsContextCleanup.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v3; // rcx

  v2 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( v2 == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v3, a2, 16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3));
  else
    return guard_dispatch_icall_no_overrides(v3, a2);
}
