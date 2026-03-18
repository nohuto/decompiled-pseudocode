/*
 * XREFs of KeOrAffinityEx2 @ 0x1402720D0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140266F24 (KiTryPopulateLogicalProcessorInformation.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x140267A84 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDF04 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PsInitializeBootCpuPartitions @ 0x140C235D0 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404CFFA4 (-KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeOrAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiOrAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiOrAffinityExNoResult(a1, a2);
}
