/*
 * XREFs of InitKeyboard @ 0x14021F0C0
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1402224B8 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x140229C70 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void __fastcall InitKeyboard(__int64 a1, __int64 a2)
{
  if ( !IsRemoteConnection(a1, a2) )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers();
  }
}
