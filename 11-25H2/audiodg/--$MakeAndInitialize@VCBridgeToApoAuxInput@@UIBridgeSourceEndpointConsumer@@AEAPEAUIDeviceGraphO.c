/*
 * XREFs of ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A8D4
 * Callers:
 *     ?CreateBridgeToApoAuxInput@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioMediaType@@IPEAUIAudioProcessingObject@@@Z @ 0x14004A768 (-CreateBridgeToApoAuxInput@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@PEAUIDeviceGraphObjectCache.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x14005ED58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeToApoAuxInput,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
        _QWORD *a1,
        void *a2,
        struct BRIDGE_STREAM_DESCRIPTOR **a3,
        struct IAudioProcessingObject **a4,
        struct IAudioMediaType **a5,
        unsigned int *a6)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v12; // ebx
  __int64 v13; // rax
  void *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  *a1 = 0LL;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v14 = v9;
  if ( !v9 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>(v9);
  *v10 = &CBridgeToApoAuxInput::`vftable';
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[4] = 0LL;
  *((_DWORD *)v10 + 10) = 0;
  *((_DWORD *)v10 + 11) = 1094930515;
  v14 = 0LL;
  v12 = CBridgeToApoAuxInput::RuntimeClassInitialize(
          (CBridgeToApoAuxInput *)v10,
          (struct IDeviceGraphObjectCache *)*a6,
          *a3,
          *a4,
          *a5,
          *a6);
  v13 = *v10;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v13)(
            v10,
            &GUID_c5a98dcf_a056_4ec0_a0b5_43e5a9a384e2,
            a1);
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v13 + 16))(v10);
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
  return (unsigned int)v12;
}
