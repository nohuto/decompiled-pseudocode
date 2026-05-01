/*
 * XREFs of PsmHamTerminateHost @ 0x18006BFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsmHamTerminateHost(__int64 a1, unsigned int a2)
{
  return HamSrvTerminateHostForBi((__int64)RmSvcGlobals + 2248, a1, a2);
}
