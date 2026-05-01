/*
 * XREFs of CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803DCEF4
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803DA9C0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803DAD7C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C790C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 */

__int64 CortanaHelpers::ResetTransientAboveLockCachedValues()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = SHRegSetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"AnyAboveLockAppsActive",
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
      (const char *)(unsigned int)v0);
  return CortanaHelpers::SetWindowsHelloActive();
}
