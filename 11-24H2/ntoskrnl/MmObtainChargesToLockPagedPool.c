/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407EDCD0
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x1406FF9E4 (HalpMcExportAndChargeNeededData.c)
 *     PopPreallocateHibernateMemory @ 0x140750D6C (PopPreallocateHibernateMemory.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2, __int64 a3, struct _KPRCB *a4)
{
  return (unsigned int)MiChargeResident(
                         &MiSystemPartition,
                         ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
                         1024LL,
                         a4) != 0;
}
