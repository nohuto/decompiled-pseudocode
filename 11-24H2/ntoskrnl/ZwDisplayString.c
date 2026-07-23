/*
 * XREFs of ZwDisplayString @ 0x1406A9030
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x14063D7E0 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
