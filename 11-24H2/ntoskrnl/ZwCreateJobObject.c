/*
 * XREFs of ZwCreateJobObject @ 0x1406A8A30
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x14063C0F0 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
