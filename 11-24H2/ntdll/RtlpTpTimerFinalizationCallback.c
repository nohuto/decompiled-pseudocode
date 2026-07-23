/*
 * XREFs of RtlpTpTimerFinalizationCallback @ 0x1800F1610
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpTpTimerRundown @ 0x18008941C (RtlpTpTimerRundown.c)
 */

LOGICAL __fastcall RtlpTpTimerFinalizationCallback(__int64 a1, __int64 a2)
{
  LOGICAL result; // eax

  _m_prefetchw((const void *)(a2 + 48));
  result = _InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpTimerRundown(a2);
  return result;
}
