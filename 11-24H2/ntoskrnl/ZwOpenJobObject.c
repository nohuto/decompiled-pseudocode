/*
 * XREFs of ZwOpenJobObject @ 0x1406A8950
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x140641A20 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
