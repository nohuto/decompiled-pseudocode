/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180178B0C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18017A000 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054DB0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1801109A8 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180178DF0 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  char *v5; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rax

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 4) = a3;
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 10) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v5 = (char *)this + 88;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)v5 + 1) = v7;
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 6) = 7LL;
  *((_QWORD *)v5 + 7) = 8LL;
  *(_DWORD *)v5 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v5 + 24),
    0x10uLL,
    *((_QWORD *)v5 + 1));
  *((_DWORD *)this + 70) = 2;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 400) = 0;
  *((_BYTE *)this + 420) = 0;
  *((_DWORD *)this + 106) = 0;
  *(_QWORD *)((char *)this + 436) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 448));
  *((_BYTE *)this + 1256) = 0;
  *((_DWORD *)this + 315) = 0;
  *((_WORD *)this + 632) = 0;
  InjectionDevice::InjectionDevice((char *)this + 1272, a3, 128LL);
  InjectionDevice::InjectionDevice((char *)this + 2832, a3, 66LL);
  InjectionDevice::InjectionDevice((char *)this + 4392, a3, 8LL);
  InjectionDevice::InjectionDevice((char *)this + 5952, a3, 4LL);
  *((_QWORD *)this + 939) = 0LL;
  *((_WORD *)this + 3760) = 0;
  *(_OWORD *)((char *)this + 7544) = 0u;
  *((_QWORD *)this + 945) = 0LL;
  *((_DWORD *)this + 1892) = 0;
  *(_QWORD *)((char *)this + 7572) = 0LL;
  *(_QWORD *)((char *)this + 7580) = 0LL;
  *((_BYTE *)this + 7588) = 0;
  *((_DWORD *)this + 1898) = 1077936128;
  *((_DWORD *)this + 1899) = 1109393408;
  *((_QWORD *)this + 950) = 5LL;
  memset_0((char *)this + 7608, 0, 0x50uLL);
  *((_QWORD *)this + 961) = 0LL;
  *((_QWORD *)this + 962) = 0LL;
  *((_QWORD *)this + 963) = 500000LL;
  *((_QWORD *)this + 964) = 160000LL;
  *((_QWORD *)this + 965) = 1000000LL;
  *((_DWORD *)this + 1934) = 100;
  *((_DWORD *)this + 1935) = 100;
  *((_BYTE *)this + 7744) = 0;
  *((_QWORD *)this + 969) = 0LL;
  *((_QWORD *)this + 970) = 0LL;
  *((_QWORD *)this + 971) = 0LL;
  *((_QWORD *)this + 972) = 0LL;
  *((_BYTE *)this + 7800) = 1;
  *(_QWORD *)((char *)this + 7804) = 0LL;
  memset_0((char *)this + 152, 0, 0x40uLL);
  memset_0((char *)this + 216, 0, 0x40uLL);
  return this;
}
