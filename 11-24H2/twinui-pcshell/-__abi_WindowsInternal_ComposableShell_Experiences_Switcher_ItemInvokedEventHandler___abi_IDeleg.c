/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@Z @ 0x1801FFC20
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_ItemInvokedEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__23456_UE_AAAJPE_AAUISwitchItem_Multitasking_5Internal_Windows___Z(
        _QWORD **a1)
{
  int v2; // eax

  try
  {
    if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v2 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      __abi_ThrowIfFailed(v2);
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
