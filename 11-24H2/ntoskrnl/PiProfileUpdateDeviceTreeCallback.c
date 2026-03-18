/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x14072D300
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x1404931D0 (IoInvalidateDeviceRelations.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 == 778 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0LL) )
      PnpRequestDeviceRemoval(a1, 0LL, 22LL);
  }
  else if ( ((v2 - 771) & 0xFFFFFFEE) == 0
         && v2 != 787
         && (*(_DWORD *)(a1 + 396) & 0x2000) != 0
         && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0LL) )
    {
      PnpRestartDeviceNode(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      PipSetDevNodeProblem(a1, 22LL, 0LL);
    }
  }
  return 0LL;
}
