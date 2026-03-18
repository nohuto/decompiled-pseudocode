/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1400129C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x140003710 (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(_BYTE **)(a1 + 960));
}
