/*
 * XREFs of ZwAlpcQueryInformation @ 0x1406A7570
 * Callers:
 *     DifZwAlpcQueryInformationWrapper @ 0x14063C600 (DifZwAlpcQueryInformationWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcQueryInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
