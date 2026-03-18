/*
 * XREFs of HUBPSM20_GettingPortLostChangesOnStart @ 0x1400129E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetPortLostChangeEvent @ 0x140004AE8 (HUBHTX_GetPortLostChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortLostChangesOnStart(__int64 a1, __int64 a2, __int64 a3)
{
  return HUBHTX_GetPortLostChangeEvent(*(_QWORD **)(a1 + 960), a2, a3);
}
