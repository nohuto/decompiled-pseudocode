/*
 * XREFs of PsReturnProcessQuota @ 0x1403C5C8C
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].SchedulingGroup, a1, 3LL, a3);
  return result;
}
