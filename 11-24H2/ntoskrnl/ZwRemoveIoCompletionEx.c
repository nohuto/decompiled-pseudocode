/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x1406A93F0
 * Callers:
 *     DifZwRemoveIoCompletionExWrapper @ 0x140646F80 (DifZwRemoveIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveIoCompletionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
