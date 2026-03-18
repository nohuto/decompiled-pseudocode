/*
 * XREFs of PipClearDevNodeFlags @ 0x1408BB57C
 * Callers:
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140724064 (PiProcessResourceRequirementsChanged.c)
 *     IopReleaseResources @ 0x1407244C4 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140725130 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseFilteredBootResources @ 0x140725798 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x140734434 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x140734DF8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14073659C (PipProcessRestartPhase1.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14098DBA0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessClearDeviceProblem @ 0x1409C5564 (PiProcessClearDeviceProblem.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessReenumeration @ 0x140A437D8 (PiProcessReenumeration.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
