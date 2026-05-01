/*
 * XREFs of ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x1804A1E30
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x1804A20CC (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::Destroy(CMultitaskingViewHotKeyHandler *this)
{
  CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
}
