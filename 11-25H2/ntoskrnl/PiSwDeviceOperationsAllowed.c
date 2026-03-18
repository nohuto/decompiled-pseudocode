/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140835F30
 * Callers:
 *     PiSwIrpGetAttributes @ 0x1407249F4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140724A94 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140724B34 (PiSwIrpSetAttributes.c)
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14095DFA4 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140AC0768 (PiSwIrpSetLifetime.c)
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
