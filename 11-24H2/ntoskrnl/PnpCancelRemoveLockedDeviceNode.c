/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x140723B44
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1404E6BC4 (PipRestoreDevNodeState.c)
 *     PipClearDevNodeUserFlags @ 0x14098E9D4 (PipClearDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409906E4 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140AC3794 (PipSetDevNodeUserFlags.c)
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
