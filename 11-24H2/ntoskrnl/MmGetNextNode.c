/*
 * XREFs of MmGetNextNode @ 0x14042FCE0
 * Callers:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CDADC (PoAllProcessorsDeepIdle.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A3F4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, int *a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = (unsigned __int16)KeNumberNodes;
  v3 = *a2 + 1;
  *a2 = v3;
  if ( v3 == v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140E2DAD0 + 4LL * (unsigned int)(v3 + v2 * a1));
}
