/*
 * XREFs of ZwDisplayString @ 0x1406A8090
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x14063F220 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(String, v1);
}
