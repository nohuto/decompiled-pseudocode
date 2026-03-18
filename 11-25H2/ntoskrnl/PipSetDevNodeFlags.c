/*
 * XREFs of PipSetDevNodeFlags @ 0x1408331E8
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1407180C8 (PiProcessSetDeviceProblem.c)
 *     IopAllocateBootResourcesInternal @ 0x140719328 (IopAllocateBootResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x1407281A4 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x140728E0C (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x140728F9C (PnpQueryStopDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     PipProcessEnumeratedChildDevice @ 0x1408330E8 (PipProcessEnumeratedChildDevice.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1408331C0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PnpQueryID @ 0x1408336D0 (PnpQueryID.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     IopFindLegacyDeviceNode @ 0x140AA9F88 (IopFindLegacyDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140C115F0 (PnpMarkHalDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140C12E98 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38 (Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  if ( (unsigned int)Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedOr((volatile signed __int32 *)(a1 + 396), a2);
  else
    *(_DWORD *)(a1 + 396) |= a2;
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
