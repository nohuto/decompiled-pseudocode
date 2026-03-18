/*
 * XREFs of PipSetDevNodeUserFlags @ 0x140AC3794
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140723B44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140723D70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiProcessSetDeviceProblem @ 0x1407241C8 (PiProcessSetDeviceProblem.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AB4720 (PnpTrackQueryRemoveDevices.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeUserFlags(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  _InterlockedOr((volatile signed __int32 *)(a1 + 400), a2);
  result = *(_DWORD *)(a1 + 400) ^ v2;
  if ( ((*(_WORD *)(a1 + 400) ^ (unsigned __int16)v2) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
