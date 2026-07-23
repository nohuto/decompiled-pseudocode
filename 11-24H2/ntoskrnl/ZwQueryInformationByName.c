/*
 * XREFs of ZwQueryInformationByName @ 0x1406A9E10
 * Callers:
 *     SdbpGetFileTimestamp @ 0x14080199C (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
