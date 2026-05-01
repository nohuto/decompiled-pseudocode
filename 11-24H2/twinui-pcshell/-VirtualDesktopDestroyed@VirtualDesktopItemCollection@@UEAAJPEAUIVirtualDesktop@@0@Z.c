/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804B44E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804B3E88 (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804B4880 (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804B4964 (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopDestroyed(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax
  int v8; // ebp
  unsigned int v9; // ecx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rbx
  int v12; // eax
  __int64 v13; // rax
  VirtualDesktopItemCollection *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopItem *v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = VirtualDesktopItemCollection::_RemoveDesktopItem((VirtualDesktopItemCollection *)((char *)this - 144), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v16 = 0;
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    while ( v7 < *((_QWORD *)this - 15) )
    {
      v17 = 0LL;
      v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IVirtualDesktopItem **))(*((_QWORD *)this - 16) + 8LL * v9);
      v11 = **v10;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v12 = v11(v10, &GUID_8335a836_e567_41a4_8778_62f004524ceb, &v17);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
        return v5;
      }
      v13 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v17 + 48LL))(v17);
      ObservableProperty<unsigned int>::operator=(v13, &v16);
      VirtualDesktopItemCollection::_SetTitle(v14, v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v7 = (unsigned int)(v8 + 1);
      v16 = v7;
      ++v8;
      v9 = v7;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
