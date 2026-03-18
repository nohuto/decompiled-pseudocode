/*
 * XREFs of PipClearDevNodeUserFlags @ 0x14082F904
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF730 (PnpTrackQueryRemoveDevices.c)
 * Callees:
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38 (Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  v4 = ~a2;
  if ( (unsigned int)Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 400), v4);
  else
    *(_DWORD *)(a1 + 400) &= v4;
  result = *(_DWORD *)(a1 + 400) ^ v2;
  if ( ((*(_WORD *)(a1 + 400) ^ (unsigned __int16)v2) & 0x347) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v7, 11LL);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 29LL);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 30LL);
    }
  }
  return result;
}
