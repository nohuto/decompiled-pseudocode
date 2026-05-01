/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z@UEAAX1@Z @ 0x1801D3020
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rdi
  int v8; // eax
  __int64 v9; // rbx
  void *pExceptionObject; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp+40h]
  void *Exception; // [rsp+68h] [rbp+48h]

  v4 = *(_QWORD *)(a1 + 8);
  pExceptionObject = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, void **))(*(_QWORD *)v4 + 24LL))(
         v4,
         &_uuidof__AVXamlAltTabViewController__,
         &pExceptionObject);
  __abi_ThrowIfFailed(v5);
  v6 = __abi_winrt_ptr_ctor((__int64)pExceptionObject);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)pExceptionObject);
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(v6);
  v12 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = (void *)__abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  pExceptionObject = 0LL;
  v8 = (**v7)(v7, &_uuidof__AVXamlAltTabViewController__, &pExceptionObject);
  __abi_ThrowIfFailed(v8);
  v9 = (__int64)pExceptionObject;
  Exception = pExceptionObject;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 16))((__int64)pExceptionObject + *(int *)(a1 + 24), a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
}
