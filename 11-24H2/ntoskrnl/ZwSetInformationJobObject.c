/*
 * XREFs of ZwSetInformationJobObject @ 0x1406A9930
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x140648480 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
