/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180177C6C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801790B0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x18009621C (--0-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$e.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x18010EA98 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180177EE8 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180192BF4 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v5; // rcx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  NonPointerProcessor::NonPointerProcessor(this, a2, a3);
  *v5 = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  v5[1] = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  v5[2] = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  v5[9] = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  v5[10] = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v5 += 11;
  v8 = HIDWORD(v5);
  v7 = 0;
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>(
    (__int64)v5,
    &v7);
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
  *((_QWORD *)this + 973) = 0LL;
  *((_BYTE *)this + 7808) = 1;
  *(_QWORD *)((char *)this + 7812) = 0LL;
  memset_0((char *)this + 152, 0, 0x40uLL);
  memset_0((char *)this + 216, 0, 0x40uLL);
  return this;
}
