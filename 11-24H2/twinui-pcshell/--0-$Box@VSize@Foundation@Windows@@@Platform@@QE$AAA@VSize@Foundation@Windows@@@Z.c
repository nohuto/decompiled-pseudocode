/*
 * XREFs of ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180144690
 * Callers:
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x1800403D8 (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180144824 (--0-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>(void *a1, __int64 a2)
{
  __int64 Value; // rbx
  unsigned int (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 type_id; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v11; // [rsp+60h] [rbp+28h] BYREF
  unsigned int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp+38h]
  __int64 v13; // [rsp+78h] [rbp+40h]

  v11 = a1;
  v10[0] = a2;
  if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA == -1 )
    {
      type_id = __abi_make_type_id(&_abi_typedesc_Windows_Foundation_Size);
      v11 = (void *)type_id;
      `Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode = Platform::Type::GetTypeCode(type_id);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(type_id);
      Init_thread_footer(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    }
  }
  Value = Platform::Details::CreateValue(
            (unsigned int)`Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode,
            v10);
  v11 = (void *)Value;
  v3 = (unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(Value);
  v12 = v3;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Value);
  v4 = 0LL;
  if ( v3 )
  {
    v11 = 0LL;
    if ( !(**v3)(v3, &_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__, &v11) )
    {
      __abi_ThrowIfFailed(0);
      v4 = (__int64)v11;
    }
    v13 = v4;
    v7 = __abi_winrt_ptr_ctor(v4);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  }
  else
  {
    v11 = Platform::Details::Heap::Allocate(0x38uLL, 0x48uLL);
    v5 = Platform::Details::CustomBox<Windows::Foundation::Size>::CustomBox<Windows::Foundation::Size>(v11, v10[0]);
    v6 = v5;
    v11 = (void *)v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v3 = (unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
      v12 = (unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
    }
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
    v7 = __abi_winrt_ptr_ctor((__int64)v3);
  }
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v3);
  return v7;
}
