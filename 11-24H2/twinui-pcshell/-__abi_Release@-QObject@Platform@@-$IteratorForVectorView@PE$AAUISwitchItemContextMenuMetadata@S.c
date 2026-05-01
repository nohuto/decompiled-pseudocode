/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x1806B7650
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@W7E$AAAKXZ @ 0x1806B76A0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_1806B76A0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBA@E$AAAKXZ @ 0x1806B76B0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_1806B76B0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBI@E$AAAKXZ @ 0x1806B76C0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_1806B76C0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCA@E$AAAKXZ @ 0x1806B76D0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_1806B76D0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCI@E$AAAKXZ @ 0x1806B76E0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_1806B76E0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801879B4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180187A98 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@AE$AAA@XZ @ 0x1806B0BF4 (--1-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // ebx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v2 )
  {
    Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::~IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>(a1);
    __abi_FTMWeakRefData::ReleaseControlBlock((Platform::Details::ControlBlock **)(a1 + 88));
  }
  return v2;
}
