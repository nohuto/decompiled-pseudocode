/*
 * XREFs of ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x180223130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register(this + 23, a2, a3);
}
