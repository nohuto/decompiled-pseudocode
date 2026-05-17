/*
 * XREFs of RtlpTpWaitFinalizationCallback @ 0x180021D90
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpTpWaitRundown @ 0x18006E794 (RtlpTpWaitRundown.c)
 */

__int64 __fastcall RtlpTpWaitFinalizationCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 24));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpWaitRundown(a2);
  return result;
}
