/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C009E770
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetPenHotKeys(void)
{
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 25LL, 16904, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 26LL, 16904, 0x82u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 27LL, 16904, 0x81u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 28LL, 16906, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 29LL, 16906, 0x82u, 0LL);
}
