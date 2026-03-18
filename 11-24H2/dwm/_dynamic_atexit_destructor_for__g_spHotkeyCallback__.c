/*
 * XREFs of _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x14000F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000C5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 */

__int64 dynamic_atexit_destructor_for__g_spHotkeyCallback__()
{
  __int64 result; // rax

  if ( g_spHotkeyCallback )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(g_spHotkeyCallback);
  return result;
}
