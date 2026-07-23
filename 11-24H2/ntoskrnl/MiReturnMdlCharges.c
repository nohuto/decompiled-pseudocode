/*
 * XREFs of MiReturnMdlCharges @ 0x140397B54
 * Callers:
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 *     MiFreeBootPageTable @ 0x140C51300 (MiFreeBootPageTable.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
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
