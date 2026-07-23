/*
 * XREFs of ZwQueryAttributesFile @ 0x1406A7B50
 * Callers:
 *     BiResolveLocateDevice @ 0x140812B7C (BiResolveLocateDevice.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x1409A8AC8 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
