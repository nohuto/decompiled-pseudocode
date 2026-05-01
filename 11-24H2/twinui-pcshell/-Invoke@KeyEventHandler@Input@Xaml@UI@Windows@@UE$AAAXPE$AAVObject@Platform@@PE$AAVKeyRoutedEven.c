/*
 * XREFs of ?Invoke@KeyEventHandler@Input@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@2345@@Z @ 0x180221200
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Input_KeyEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@KeyEventHandler@Input@Xaml@UI@Windows@@23456@UE$AAAJPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@3456@@Z @ 0x1802211D0 (-__abi_Windows_UI_Xaml_Input_KeyEventHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Key.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::UI::Xaml::Input::KeyEventHandler::Invoke(_QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &Windows::UI::Xaml::Input::KeyEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
