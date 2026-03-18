/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x14077A300
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x140638F20 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A897E0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
