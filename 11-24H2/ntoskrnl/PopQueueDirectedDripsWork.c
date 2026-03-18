/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14046D734
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14046C80C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046D6D0 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A27484 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 *     PopInitializeDirectedDrips @ 0x140C2E294 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140F0DD28);
  v2 = _InterlockedOr64(&qword_140F0DD28, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140F0DD38, 0, 0);
  return v2;
}
