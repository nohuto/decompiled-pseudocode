/*
 * XREFs of HalpGetIrtEntryCount @ 0x1405537DC
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140B54BB8 (HsaInitializeInterruptRemapping.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
