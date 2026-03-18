/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14046EF04
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14046DFD4 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046EEA0 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A1E4E4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
 *     PopInitializeDirectedDrips @ 0x140C1D194 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140F0D648);
  v2 = _InterlockedOr64(&qword_140F0D648, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140F0D658, 0, 0);
  return v2;
}
