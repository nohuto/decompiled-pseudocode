/*
 * XREFs of ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x180180F40
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180180C28 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x1804A1FA4 (-_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(CMultitaskingViewHotKeyHandler *this)
{
  char v1; // bl

  if ( *((_DWORD *)this + 17) == 2 )
    return 1;
  v1 = 0;
  if ( !*((_DWORD *)this + 17) && !IsDebuggerPresent() )
    return 1;
  return v1;
}
