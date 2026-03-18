/*
 * XREFs of SmmIommuMapIdentityRange @ 0x14003B548
 * Callers:
 *     SmmIommuMapStagingMdl @ 0x14003B134 (SmmIommuMapStagingMdl.c)
 *     SmmMapIommu @ 0x14003B520 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuMapIdentityRange(__int64 a1)
{
  if ( (unsigned int)dword_140161528 >= 4 )
    return 3221225473LL;
  else
    return ((__int64 (__fastcall *)(__int64, __int64))qword_140161578)(a1, 3LL);
}
