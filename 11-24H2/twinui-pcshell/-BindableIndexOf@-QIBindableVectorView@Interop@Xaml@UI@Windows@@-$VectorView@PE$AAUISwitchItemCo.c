/*
 * XREFs of ?BindableIndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x1806B1600
 * Callers:
 *     ?BindableIndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GBI@E$AAA_NPE$AAVObject@8@PEAI@Z @ 0x1806B1650 (-BindableIndexOf@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAU_ea_1806B1650.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@PEAIPEA_N@Z @ 0x1806B88B0 (-__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf@-QIBindableVectorView@Interop@.c)
 * Callees:
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1806B5304 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

char __fastcall _BindableIndexOf__QIBindableVectorView_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAA_NPE_AAVObject_8_PEAI_Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        _DWORD *a3)
{
  __int64 v6; // rcx

  *a3 = 0;
  Platform::Collections::Details::ValidateCounter(a1 + 64, *(unsigned int *)(a1 + 96));
  return Platform::Collections::Details::VectorBindableIndexOf<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>>(
           v6,
           *(_QWORD **)(a1 + 80),
           a2,
           a3);
}
