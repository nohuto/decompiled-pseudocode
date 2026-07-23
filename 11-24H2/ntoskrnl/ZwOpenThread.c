/*
 * XREFs of ZwOpenThread @ 0x1406A9AD0
 * Callers:
 *     DifZwOpenThreadWrapper @ 0x140641430 (DifZwOpenThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
