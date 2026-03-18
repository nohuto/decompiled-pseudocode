/*
 * XREFs of InitKeyboard @ 0x1C0088EB0
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C0088F1C (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0088F80 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void InitKeyboard()
{
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers();
  }
}
