/*
 * XREFs of ZwCreateTimer @ 0x1406A7D70
 * Callers:
 *     DifZwCreateTimerWrapper @ 0x14063E550 (DifZwCreateTimerWrapper.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A9B198 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess);
}
