/*
 * XREFs of MiReturnMdlCharges @ 0x1403A8ECC
 * Callers:
 *     MiReturnMdlExcess @ 0x140671F10 (MiReturnMdlExcess.c)
 *     MiFreeBootPageTable @ 0x140C4F170 (MiFreeBootPageTable.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC (MiReleaseNonPagedResourcesNotExposed.c)
 */

void __fastcall MiReturnMdlCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( (a3 & 1) != 0 )
    MiReleaseNonPagedResourcesNotExposed(a1, a2);
  else
    MiReleaseNonPagedResources(a1, a2);
  if ( (a3 & 2) == 0 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19648), -(__int64)a2);
}
