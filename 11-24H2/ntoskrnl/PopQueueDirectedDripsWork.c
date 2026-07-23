/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1404682D4
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140468270 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A1BF04 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 *     PopInitializeDirectedDrips @ 0x140C303B4 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140F0DFC8);
  v2 = _InterlockedOr64(&qword_140F0DFC8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140F0DFD8, 0, 0);
  return v2;
}
