/*
 * XREFs of PipClearDevNodeFlags @ 0x1408B8F2C
 * Callers:
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 *     IopReleaseResources @ 0x140722054 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140722CC0 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseFilteredBootResources @ 0x140723328 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x140732364 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x140732D28 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1407344CC (PipProcessRestartPhase1.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140981B8C (PiProcessClearDeviceProblem.c)
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessReenumeration @ 0x140A39068 (PiProcessReenumeration.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 396), ~a2);
  result = *(_DWORD *)(a1 + 396) ^ v2;
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
