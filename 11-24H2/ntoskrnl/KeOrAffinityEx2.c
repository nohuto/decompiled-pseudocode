/*
 * XREFs of KeOrAffinityEx2 @ 0x1402067F0
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140204354 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140206818 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     EmonAddProfileSource @ 0x14055A820 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x14056A3A0 (Amd64AddProfileSource.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A3F4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404CD21C (-KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeOrAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiOrAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiOrAffinityExNoResult(a1, a2);
}
