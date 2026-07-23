/*
 * XREFs of IvtGetBlockedDomain @ 0x1404C1988
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404C1800 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtConfigureAts @ 0x14056B300 (IvtConfigureAts.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056E48C (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x1405762B8 (HalpIvtFindReservedDomain.c)
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
