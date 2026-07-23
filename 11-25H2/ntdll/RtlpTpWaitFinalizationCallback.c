/*
 * XREFs of RtlpTpWaitFinalizationCallback @ 0x1800442D0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpTpWaitRundown @ 0x18003CC94 (RtlpTpWaitRundown.c)
 */

LOGICAL __fastcall RtlpTpWaitFinalizationCallback(__int64 a1, __int64 a2)
{
  LOGICAL result; // eax

  _m_prefetchw((const void *)(a2 + 24));
  result = _InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpWaitRundown(a2);
  return result;
}
