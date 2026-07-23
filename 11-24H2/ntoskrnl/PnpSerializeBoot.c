/*
 * XREFs of PnpSerializeBoot @ 0x1405A0E5C
 * Callers:
 *     NtSerializeBoot @ 0x14082B310 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140592BF4 (McTemplateK0_EtwWriteTransfer.c)
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
