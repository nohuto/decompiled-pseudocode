/*
 * XREFs of ZwOpenThreadToken @ 0x1406A7830
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1406412A0 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
