/*
 * XREFs of ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18006B754
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x18007D430 (s_mmeNotifyDeviceStateChanged.c)
 *     ?SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z @ 0x180106D08 (-SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006B7BC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x18006B978 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged(
        DynamicAudioEndpointManager *this,
        const unsigned __int16 *a2,
        int a3)
{
  DynamicAudioEndpointManager *v3; // rbx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]

  v3 = g_DynamicAudioEndpointManager;
  v4 = 0LL;
  v5 = 0;
  DynamicAudioEndpointManager::OnRuleOperation(g_DynamicAudioEndpointManager, a2, 0LL, &v4, a3);
  DynamicAudioEndpointManager::RefreshPublishedDefaults(v3, (bool (*const)[6])&v4, 0);
}
