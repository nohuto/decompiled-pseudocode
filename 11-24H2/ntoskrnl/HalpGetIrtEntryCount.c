/*
 * XREFs of HalpGetIrtEntryCount @ 0x140555E9C
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
