/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407ED700
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x140701DA4 (HalpMcExportAndChargeNeededData.c)
 *     PopPreallocateHibernateMemory @ 0x140752A4C (PopPreallocateHibernateMemory.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
