/*
 * XREFs of StorPortUnitPowerControl @ 0x14007A9E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x140078FBC (RaidUnitSendPoFxPowerControlToMiniport.c)
 */

__int64 __fastcall StorPortUnitPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  return RaidUnitSendPoFxPowerControlToMiniport(a1, a2, a3, a4, a5, a6, a7);
}
