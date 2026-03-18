/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14071E364
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x1406F6910 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopCheckIfMergeRequired @ 0x140A0EBBC (IopCheckIfMergeRequired.c)
 *     IopSortRelationListForRemove @ 0x140A0F630 (IopSortRelationListForRemove.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140A0F844 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F8618 (PiListEntryToDependencyEdge.c)
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
