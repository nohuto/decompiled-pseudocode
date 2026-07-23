/*
 * XREFs of ZwWaitForMultipleObjects @ 0x1406A7F10
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x140648190 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
