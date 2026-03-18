/*
 * XREFs of HUBDSM_CompletingWaitWakeOnDetachDuringSuspending @ 0x1400214B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x14001518C (HUBPDO_CompleteWaitWake.c)
 */

__int64 __fastcall HUBDSM_CompletingWaitWakeOnDetachDuringSuspending(__int64 a1)
{
  HUBPDO_CompleteWaitWake(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
