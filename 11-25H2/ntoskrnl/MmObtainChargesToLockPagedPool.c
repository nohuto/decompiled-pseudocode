/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407DD860
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x1406F5FB4 (HalpMcExportAndChargeNeededData.c)
 *     PopPreallocateHibernateMemory @ 0x14074697C (PopPreallocateHibernateMemory.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
