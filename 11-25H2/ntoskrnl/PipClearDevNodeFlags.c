/*
 * XREFs of PipClearDevNodeFlags @ 0x1408350BC
 * Callers:
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     IopReleaseResources @ 0x1407183C4 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407191B4 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseFilteredBootResources @ 0x140719818 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x1407281A4 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x140728B68 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14072A30C (PipProcessRestartPhase1.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1408311EC (PnpGetResourceRequirementsForAssignTable.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PiProcessClearDeviceProblem @ 0x1409AD5D0 (PiProcessClearDeviceProblem.c)
 *     PiProcessReenumeration @ 0x140A3E2E8 (PiProcessReenumeration.c)
 * Callees:
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38 (Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v4 = ~a2;
  if ( (unsigned int)Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 396), v4);
  else
    *(_DWORD *)(a1 + 396) &= v4;
  result = *(_DWORD *)(a1 + 396) ^ v2;
  if ( (result & 0x307000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v7, 11LL);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 28LL);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
