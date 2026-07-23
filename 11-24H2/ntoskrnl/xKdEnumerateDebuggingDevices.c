/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1404F82D0
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
