/*
 * XREFs of ?CopyToOrDetach@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1806B1A50
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B64E0 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU34567@I@Z @ 0x1806B1114 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 */

void __fastcall Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::CopyToOrDetach(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  if ( !a2 || !a3 )
  {
LABEL_15:
    __abi_WinRTraiseNullReferenceException();
    __debugbreak();
    JUMPOUT(0x1806B1B1BLL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 76) && *(_QWORD *)(a1 + 88) && *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12LL) == 1 )
  {
    *a2 = *(void **)(a1 + 80);
    *a3 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = 0;
    *(_BYTE *)(a1 + 76) = 0;
    *(_QWORD *)(a1 + 80) = 0LL;
    return;
  }
  if ( !*(_BYTE *)(a1 + 76) && (!*(_QWORD *)(a1 + 88) || *(int *)(*(_QWORD *)(a1 + 88) + 12LL) <= 1) )
  {
LABEL_14:
    __abi_WinRTraiseFailureException();
    __debugbreak();
    goto LABEL_15;
  }
  *a2 = Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::AllocateAndCopyElements(
          *(__int64 **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
