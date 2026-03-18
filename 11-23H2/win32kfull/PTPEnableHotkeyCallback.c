/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C0223070
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 */

void __fastcall PTPEnableHotkeyCallback(__int64 a1)
{
  _BOOL8 v1; // rbx

  v1 = *(_DWORD *)(SGDGetUserSessionState(a1) + 520) == 0;
  if ( (unsigned int)EnablePTPDevices(v1) )
    PostShellHookMessagesEx(0x39u, v1, 0LL);
}
