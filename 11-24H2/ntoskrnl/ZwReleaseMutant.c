/*
 * XREFs of ZwReleaseMutant @ 0x1406A77B0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
