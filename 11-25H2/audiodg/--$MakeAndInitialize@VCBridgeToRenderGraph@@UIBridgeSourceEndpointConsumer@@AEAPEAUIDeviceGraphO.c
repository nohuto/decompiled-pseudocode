/*
 * XREFs of ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAI5@Z @ 0x140067B5C
 * Callers:
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C750 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x14005ED58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@M.c)
 *     ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@KII@Z @ 0x140067D3C (-RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProces.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeToRenderGraph,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,ICrossProcessMemory * &,SYSTEM_AUDIO_STREAM * &,unsigned long &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        struct IDeviceGraphObjectCache **a2,
        struct ICrossProcessMemory **a3,
        struct SYSTEM_AUDIO_STREAM **a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // edi
  __int64 v14; // rax
  void *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v16 = v11;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>(v11);
    *v12 = &CBridgeToRenderGraph::`vftable';
    v12[2] = 0LL;
    v12[3] = 0LL;
    v12[4] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[8] = 0LL;
    v12[9] = 0LL;
    *((_WORD *)v12 + 40) = 0;
    *((_DWORD *)v12 + 21) = 0;
    v16 = 0LL;
    v13 = CBridgeToRenderGraph::RuntimeClassInitialize((CBridgeToRenderGraph *)v12, *a2, *a3, *a4, *a5, *a6, *a7);
    v14 = *v12;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v14)(
              v12,
              &GUID_c5a98dcf_a056_4ec0_a0b5_43e5a9a384e2,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v14 + 16))(v12);
    }
  }
  else
  {
    v13 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v16);
  return (unsigned int)v13;
}
