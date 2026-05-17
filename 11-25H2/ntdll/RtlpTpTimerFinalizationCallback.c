/*
 * XREFs of RtlpTpTimerFinalizationCallback @ 0x18003B5E0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 */

__int64 __fastcall RtlpTpTimerFinalizationCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 48));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpTimerRundown(a2);
  return result;
}
