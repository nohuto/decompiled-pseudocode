/*
 * XREFs of PsReturnProcessQuota @ 0x14046CF18
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A03620 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 3, a3);
  return result;
}
