/*
 * XREFs of ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x18022DFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register(this + 17, a2, a3);
}
