/*
 * XREFs of ZwReplaceKey @ 0x1406AA410
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x140645860 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NewFile);
}
