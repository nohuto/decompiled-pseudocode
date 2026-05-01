/*
 * XREFs of ?Swap@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXAEAV12@@Z @ 0x1806B5178
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x1806B03D8 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B0F6C (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x1806B0FA4 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_1806B0FA4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18011B4D8 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1806B0FDC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Swap(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  __abi_winrt_ptr_assign((_QWORD *)a1, *(_QWORD *)a2);
  __abi_winrt_ptr_assign((_QWORD *)a2, v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  v5 = (__int64 *)(a1 + 8);
  v8[0] = 0LL;
  if ( v8 != (__int64 *)(a1 + 8) )
  {
    v8[0] = *v5;
    *v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v5, (__int64 *)(a2 + 8));
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a2 + 8), v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a2 + 24) = v6;
  return result;
}
