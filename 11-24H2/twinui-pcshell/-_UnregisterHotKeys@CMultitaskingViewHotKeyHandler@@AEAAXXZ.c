/*
 * XREFs of ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x1804A20CC
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180180C28 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x1804A1E30 (-Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(CMultitaskingViewHotKeyHandler *this)
{
  if ( *((_DWORD *)this + 16) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    *((_DWORD *)this + 16) = 0;
  }
}
