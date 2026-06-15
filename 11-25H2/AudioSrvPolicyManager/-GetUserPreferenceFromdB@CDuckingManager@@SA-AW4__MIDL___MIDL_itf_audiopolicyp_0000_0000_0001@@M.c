/*
 * XREFs of ?GetUserPreferenceFromdB@CDuckingManager@@SA?AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M@Z @ 0x18000D064
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000CDC0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::GetUserPreferenceFromdB(float a1)
{
  if ( a1 > -6.0 )
    return 3LL;
  if ( a1 <= -18.0 )
    return a1 > -96.0;
  return 2LL;
}
