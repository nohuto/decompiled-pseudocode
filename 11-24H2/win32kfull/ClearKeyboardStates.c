/*
 * XREFs of ClearKeyboardStates @ 0x14024045C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140285FAC (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1402224B8 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  for ( i = 0LL; i < 64; ++i )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_BYTE *)(UserSessionState + i + 14336) &= 0xAAu;
  }
  v4 = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(*(_QWORD *)(v4 + 19928) + 6988LL);
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers(v6, v5);
}
