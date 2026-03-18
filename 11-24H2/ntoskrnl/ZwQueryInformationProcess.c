/*
 * XREFs of ZwQueryInformationProcess @ 0x1406A6730
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x140645330 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
