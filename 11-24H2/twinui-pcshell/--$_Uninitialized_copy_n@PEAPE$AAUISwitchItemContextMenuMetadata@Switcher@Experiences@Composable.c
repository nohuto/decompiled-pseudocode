/*
 * XREFs of ??$_Uninitialized_copy_n@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@_KPEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@0@@Z @ 0x1806AFFF8
 * Callers:
 *     ??$_Assign_counted_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@_K@Z @ 0x1806AFCBC (--$_Assign_counted_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@0@@Z @ 0x1806AFDA0 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B040C (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_1806B040C.c)
 */

__int64 __fastcall std::_Uninitialized_copy_n<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rsi

  for ( i = a2; i; --i )
  {
    Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
      a3,
      *a1);
    a3 += 32LL;
    ++a1;
  }
  std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
    a3,
    a3);
  return a3;
}
