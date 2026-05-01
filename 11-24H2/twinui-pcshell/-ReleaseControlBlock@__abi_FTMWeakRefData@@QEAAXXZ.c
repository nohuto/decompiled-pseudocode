/*
 * XREFs of ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180187A98
 * Callers:
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180187860 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x1801878B0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180187910 (-__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180187960 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ @ 0x18069D9E0 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ.c)
 *     ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18069DA70 (-__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x1806B7550 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x1806B7650 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@S.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x1806B76F0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x1806B77D0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exp.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x1806B7890 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x1806B7930 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x1806BD4F0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x1806BEDA0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x1806BF580 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall __abi_FTMWeakRefData::ReleaseControlBlock(Platform::Details::ControlBlock **this)
{
  Platform::Details::ControlBlock *v1; // rbx

  v1 = *this;
  Platform::Details::ControlBlock::ReleaseTarget(*this);
  Platform::Details::ControlBlock::__abi_Release(v1);
}
