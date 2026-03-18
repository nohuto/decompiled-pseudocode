/*
 * XREFs of IoGetActivityIdThread @ 0x14043EC90
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
