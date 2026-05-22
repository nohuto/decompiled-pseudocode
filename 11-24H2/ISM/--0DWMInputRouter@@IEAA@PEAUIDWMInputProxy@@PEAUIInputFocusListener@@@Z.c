/*
 * XREFs of ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800512DC
 * Callers:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180051110 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18019ECA8 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=26
DWMInputRouter *__fastcall DWMInputRouter::DWMInputRouter(
        DWMInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  char *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `ISystemInputRouterForeground'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 9) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  v4 = (char *)this + 88;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 7LL;
  *((_QWORD *)v4 + 7) = 8LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v4 + 24),
    0x10uLL,
    *((_QWORD *)v4 + 1));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 25) = v6;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 7LL;
  *((_QWORD *)this + 31) = 8LL;
  *((_DWORD *)this + 48) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 216,
    0x10uLL,
    *((_QWORD *)this + 25));
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = "CMK:PointerDown";
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 71) = v7;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 7LL;
  *((_QWORD *)this + 77) = 8LL;
  *((_DWORD *)this + 140) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 584,
    0x10uLL,
    *((_QWORD *)this + 71));
  *((_QWORD *)this + 23) = a2;
  *((_QWORD *)this + 35) = a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
  *((_QWORD *)this + 40) = 0LL;
  return this;
}
