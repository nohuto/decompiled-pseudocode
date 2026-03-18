/*
 * XREFs of EngSecureMem @ 0x1401C3030
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x1400875A0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  return GrepSecureVirtualMemory(Address, cjLength, 4u);
}
