/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x180064EA4
 * Callers:
 *     RtlpHpVsContextCleanup @ 0x180064C78 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsSlotFreeList @ 0x180119648 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1801198FC (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, __int64); // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  v2 = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
  v3 = 16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3);
  v4 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( v2 == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v4, a2, v3);
  else
    return v2(v4, a2, v3);
}
