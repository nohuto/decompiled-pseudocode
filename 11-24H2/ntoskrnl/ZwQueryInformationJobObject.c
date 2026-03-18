/*
 * XREFs of ZwQueryInformationJobObject @ 0x1406A8ED0
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x140645180 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
