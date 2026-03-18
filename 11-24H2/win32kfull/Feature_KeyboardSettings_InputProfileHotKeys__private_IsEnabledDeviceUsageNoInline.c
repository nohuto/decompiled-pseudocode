/*
 * XREFs of Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x140280898
 * Callers:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401D7774 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1401F9CB0 (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140238600 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback @ 0x1402808D0 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback.c)
 */

__int64 Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KeyboardSettings_InputProfileHotKeys__private_featureState & 0x10) != 0 )
    return Feature_KeyboardSettings_InputProfileHotKeys__private_featureState & 1;
  else
    return Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback(
             (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_featureState,
             3LL);
}
