/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1408B7FB4
 * Callers:
 *     PiSwIrpGetAttributes @ 0x14072EAE4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x14072EB84 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x14072EC24 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x14072ED60 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1408AF56C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
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
