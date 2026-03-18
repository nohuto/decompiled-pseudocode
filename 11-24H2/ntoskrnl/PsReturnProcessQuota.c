/*
 * XREFs of PsReturnProcessQuota @ 0x1403CD728
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A070F0 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 3, a3);
  return result;
}
