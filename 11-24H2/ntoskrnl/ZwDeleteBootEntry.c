/*
 * XREFs of ZwDeleteBootEntry @ 0x1406A8ED0
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x14063D040 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x1408158DC (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Id);
}
