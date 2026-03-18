/*
 * XREFs of IvtGetBlockedDomain @ 0x1404C75FC
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404C7474 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C8F20 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtConfigureAts @ 0x14056AB70 (IvtConfigureAts.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056DCFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x140575B28 (HalpIvtFindReservedDomain.c)
 */

__int64 __fastcall IvtGetBlockedDomain(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned int *ReservedDomain; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (ReservedDomain = (unsigned int *)HalpIvtFindReservedDomain(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)ReservedDomain + 1);
    result = *ReservedDomain;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = IvtBlockedPageTablePhysical;
    result = *(unsigned int *)(a1 + 260);
  }
  *a3 = v8 >> 12;
  return result;
}
