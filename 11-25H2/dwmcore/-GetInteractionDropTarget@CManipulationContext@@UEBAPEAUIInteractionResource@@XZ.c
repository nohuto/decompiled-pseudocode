/*
 * XREFs of ?GetInteractionDropTarget@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ @ 0x180209710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionDropTarget(CManipulationContext *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 17);
}
