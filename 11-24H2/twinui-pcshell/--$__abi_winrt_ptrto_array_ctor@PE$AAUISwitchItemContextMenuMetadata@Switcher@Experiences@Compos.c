/*
 * XREFs of ??$__abi_winrt_ptrto_array_ctor@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@@YAPEAXQ$01E$ADV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@Z @ 0x1806B00B0
 * Callers:
 *     ?get@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@Value@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x1806B9020 (-get@-Q-$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ??0?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1806B0440 (--0-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall __abi_winrt_ptrto_array_ctor<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
        _BYTE *a1)
{
  _BYTE *v1; // rbx
  void *v3; // [rsp+30h] [rbp+8h]

  v1 = a1;
  if ( a1 )
  {
    if ( a1[76] )
    {
      v3 = Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
      return Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
               v3,
               *((_QWORD *)v1 + 10),
               *((unsigned int *)v1 + 18));
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (__int64)v1;
}
