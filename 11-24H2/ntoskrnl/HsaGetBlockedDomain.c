/*
 * XREFs of HsaGetBlockedDomain @ 0x1404F7D44
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     HsaInitializeIommu @ 0x140B54D50 (HsaInitializeIommu.c)
 * Callees:
 *     HalpHsaFindReservedDomain @ 0x1404F7D98 (HalpHsaFindReservedDomain.c)
 */

__int64 __fastcall HsaGetBlockedDomain(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned int *ReservedDomain; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (ReservedDomain = (unsigned int *)HalpHsaFindReservedDomain(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)ReservedDomain + 1);
    result = *ReservedDomain;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = HsaBlockedPageTablePhysical;
    result = *(unsigned int *)(a1 + 200);
  }
  *a3 = v8 >> 12;
  return result;
}
