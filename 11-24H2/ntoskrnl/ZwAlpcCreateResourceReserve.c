/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x1406A73F0
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x14063C170 (DifZwAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateResourceReserve(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
