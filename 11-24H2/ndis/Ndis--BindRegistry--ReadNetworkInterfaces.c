/*
 * XREFs of Ndis::BindRegistry::ReadNetworkInterfaces @ 0x1401443A8
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140147DA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x140143FDC (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaces(__int64 a1)
{
  return netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(a1, (unsigned int)a1, a1);
}
