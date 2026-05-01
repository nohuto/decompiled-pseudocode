/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B3610
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B3660 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2_ea_1806B3660.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B6780 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1806B6780.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__VectorChangedEventArgs_2Collections_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 48));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v1;
}
