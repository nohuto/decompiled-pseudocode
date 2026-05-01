/*
 * XREFs of ?InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ @ 0x18047D358
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18004ED50 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180477D98 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapter::InvokeIsPrimaryViewInvokedBySystemButton(
        KeyboardHosting::TabTipAdapter *this)
{
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 16);
  v3 = 0;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 232LL))(v1, &v3);
  return v3 != 0;
}
