/*
 * XREFs of ZwQueryFullAttributesFile @ 0x1406A9DD0
 * Callers:
 *     DifZwQueryFullAttributesFileWrapper @ 0x140643280 (DifZwQueryFullAttributesFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
