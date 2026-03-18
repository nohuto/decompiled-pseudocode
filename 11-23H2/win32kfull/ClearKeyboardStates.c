/*
 * XREFs of ClearKeyboardStates @ 0x1C0088ED8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C0088F1C (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // rax

  for ( i = 0LL; i < 64; ++i )
  {
    v2 = SGDGetUserSessionState(a1);
    *(_BYTE *)(v2 + i + 13992) &= 0xAAu;
  }
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers();
}
