/*
 * XREFs of ?GetAt@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1806B2B60
 * Callers:
 *     ?BindableGetAt@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAVObject@8@I@Z @ 0x1806B1500 (-BindableGetAt@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItemCont.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetAt@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B8330 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switche.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x1806AFA7C (--$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1806B52A4 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1806B5304 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetAt__Q__IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__I_Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rdx
  Platform::Collections::Details *v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h]

  v2 = a2;
  Platform::Collections::Details::ValidateCounter(a1 + 64, *(unsigned int *)(a1 + 96));
  v4 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) - **(_QWORD **)(a1 + 80)) >> 5;
  LOBYTE(v5) = v2 < v4;
  Platform::Collections::Details::ValidateBounds(v5, v4);
  v8 = Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata>();
  v6 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  return v6;
}
