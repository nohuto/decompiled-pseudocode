/*
 * XREFs of ZwCreateProcessStateChange @ 0x1406A8BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcessStateChange(
        PHANDLE ProcessStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessStateChangeHandle);
}
