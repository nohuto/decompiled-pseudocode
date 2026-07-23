/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14071BEF4
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x1406F4910 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopCheckIfMergeRequired @ 0x1409BCFC0 (IopCheckIfMergeRequired.c)
 *     IopSortRelationListForRemove @ 0x1409BDA40 (IopSortRelationListForRemove.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1409BDC54 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
