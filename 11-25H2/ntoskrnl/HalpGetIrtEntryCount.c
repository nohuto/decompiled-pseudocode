/*
 * XREFs of HalpGetIrtEntryCount @ 0x14055359C
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
