/*
 * XREFs of SmmIommuMapIdentityRange @ 0x14003AF98
 * Callers:
 *     SmmIommuMapStagingMdl @ 0x14003A994 (SmmIommuMapStagingMdl.c)
 *     SmmMapIommu @ 0x14003AF70 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuMapIdentityRange(__int64 a1)
{
  if ( (unsigned int)dword_14015E518 >= 4 )
    return 3221225473LL;
  else
    return ((__int64 (__fastcall *)(__int64, __int64))qword_14015E568)(a1, 3LL);
}
