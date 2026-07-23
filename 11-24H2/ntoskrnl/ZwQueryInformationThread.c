/*
 * XREFs of ZwQueryInformationThread @ 0x1406A7850
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x140643C50 (DifZwQueryInformationThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
