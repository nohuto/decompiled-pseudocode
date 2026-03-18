/*
 * XREFs of IvtGetBlockedDomain @ 0x1404C8254
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404C80CC (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404CB814 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtConfigureAts @ 0x14056DE70 (IvtConfigureAts.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x140570FFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x140578E28 (HalpIvtFindReservedDomain.c)
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
