/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x1400993E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x140099400 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}
