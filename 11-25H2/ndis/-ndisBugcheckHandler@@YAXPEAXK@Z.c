/*
 * XREFs of ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x14009C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1400A6374 (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisBugcheckHandler(struct _NDIS_MINIPORT_BLOCK *Buffer, ULONG Length)
{
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax

  if ( Length == 6104 )
  {
    CurrentDevicePowerState = Buffer->CurrentDevicePowerState;
    Buffer->PnPFlags |= 0x1000000u;
    if ( (unsigned int)(CurrentDevicePowerState - 2) > 2 )
    {
      if ( Buffer->MajorNdisVersion >= 6u )
        ndisMInvokeShutdown(Buffer, NdisShutdownBugCheck);
      else
        Buffer->ShutdownHandler(Buffer->ShutdownContext);
    }
  }
}
