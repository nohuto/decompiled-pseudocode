/*
 * XREFs of ZwLockVirtualMemory @ 0x1406A9690
 * Callers:
 *     CmSiLockViewOfSection @ 0x14048F81C (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060C5BC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
