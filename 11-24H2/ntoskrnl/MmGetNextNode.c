/*
 * XREFs of MmGetNextNode @ 0x140421790
 * Callers:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CB1F8 (PoAllProcessorsDeepIdle.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406089B4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
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
    return *(unsigned int *)(qword_140E2DC10 + 4LL * (unsigned int)(v3 + v2 * a1));
}
