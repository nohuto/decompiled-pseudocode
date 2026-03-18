/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1400019FC
 * Callers:
 *     DriverCleanup @ 0x140001690 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !MS_USBHUB3_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBHUB3_ETW_PROVIDER_Context);
  MS_USBHUB3_ETW_PROVIDER_Context = 0LL;
  return result;
}
