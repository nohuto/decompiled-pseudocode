/*
 * XREFs of ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034D7B0
 * Callers:
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18035CAB0 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x180357F50 (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 */

char __fastcall GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation(
        GamingOverlayExperienceManager *this)
{
  char v1; // bl
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v5; // [rsp+32h] [rbp+Ah]

  v1 = 0;
  if ( *((_BYTE *)this + 1032) )
    return 1;
  GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(this, &v4);
  if ( v4 > 5u || v4 == 5 && v5 >= 0x1F4u )
  {
    v1 = 1;
    *((_BYTE *)this + 1032) = 1;
  }
  return v1;
}
