/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1408BA604
 * Callers:
 *     PiSwIrpGetAttributes @ 0x140730AD4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140730B74 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140730C14 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x140730D50 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1408B1C78 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B9044 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
