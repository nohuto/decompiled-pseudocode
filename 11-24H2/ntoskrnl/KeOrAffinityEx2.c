/*
 * XREFs of KeOrAffinityEx2 @ 0x14032DDD0
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14032B934 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14032DDF8 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406089B4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C65EC (-KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeOrAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiOrAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiOrAffinityExNoResult(a1, a2);
}
