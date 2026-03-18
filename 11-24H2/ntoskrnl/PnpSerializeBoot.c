/*
 * XREFs of PnpSerializeBoot @ 0x1405A3F1C
 * Callers:
 *     NtSerializeBoot @ 0x14082AAE0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140595BC4 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 PnpSerializeBoot()
{
  unsigned int v0; // ebx

  v0 = -1073741823;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(MS_KernelPnP_Provider_Context, (const EVENT_DESCRIPTOR *)KMPnPEvt_SerializeBoot_Start);
  if ( PnPBootDriversInitialized )
    v0 = KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(MS_KernelPnP_Provider_Context, (const EVENT_DESCRIPTOR *)KMPnPEvt_SerializeBoot_Stop);
  return v0;
}
