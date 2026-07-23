/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1406F75AC
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x1409BDD98 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
