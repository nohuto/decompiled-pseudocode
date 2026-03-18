/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x1402B415C
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x1402B3510 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1402B3AF0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextCleanup @ 0x140607380 (RtlpHpVsContextCleanup.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x1402B41B0 (RtlpHpSegLfhVsFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *(_QWORD *)(a1 + 8) ^ a1;
  v3 = 16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3);
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)) == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v2, a2, v3);
  else
    return guard_dispatch_icall_no_overrides(v2, a2, v3, v2);
}
