/*
 * XREFs of ZwOpenJobObject @ 0x1406A98F0
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x14063FFE0 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
