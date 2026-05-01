/*
 * XREFs of ?Invoke@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@UE$AAAXPE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@Z @ 0x1806B4400
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@23456@UE$AAAJPE$AAUIBindableObservableVector@3456@PE$AAVObject@Platform@@@Z @ 0x1806B85B0 (-__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::Invoke(_QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
