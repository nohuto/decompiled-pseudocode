/*
 * XREFs of HUBDSM_FlushingPnpEventsForBootDevice @ 0x14001F830
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x14001BADC (HUBPDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBDSM_FlushingPnpEventsForBootDevice(__int64 a1)
{
  HUBPDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
