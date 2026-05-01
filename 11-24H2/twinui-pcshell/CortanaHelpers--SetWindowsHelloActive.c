/*
 * XREFs of CortanaHelpers::SetWindowsHelloActive @ 0x1803DD600
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803DAD7C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803DCEF4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C790C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 */

void CortanaHelpers::SetWindowsHelloActive()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = SHRegSetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"IsWindowsHelloActive",
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
      (const char *)(unsigned int)v0);
}
