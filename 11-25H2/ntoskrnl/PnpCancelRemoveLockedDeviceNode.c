/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x140717A44
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A68CA8 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14083216C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 */

__int64 __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512LL);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
    PipClearDevNodeUserFlags(a1, 512LL);
    PipRestoreDevNodeState(a1);
    return PnpStartedDeviceNodeDependencyCheck(a1);
  }
  return result;
}
