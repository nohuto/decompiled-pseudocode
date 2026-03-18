/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1406F996C
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x140A0F988 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140A1123C (PnpProcessDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F8618 (PiListEntryToDependencyEdge.c)
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
