/*
 * XREFs of NdisSetEvent @ 0x14006AA90
 * Callers:
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
