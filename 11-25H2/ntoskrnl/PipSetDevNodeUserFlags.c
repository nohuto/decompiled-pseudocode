/*
 * XREFs of PipSetDevNodeUserFlags @ 0x140833844
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiProcessSetDeviceProblem @ 0x1407180C8 (PiProcessSetDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF730 (PnpTrackQueryRemoveDevices.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38 (Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeUserFlags(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  if ( (unsigned int)Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedOr((volatile signed __int32 *)(a1 + 400), a2);
  else
    *(_DWORD *)(a1 + 400) |= a2;
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
