/*
 * XREFs of ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A538
 * Callers:
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A32C (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CBridgeSourceEndpoint@@QEAA@XZ @ 0x140067204 (--0CBridgeSourceEndpoint@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067900 (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeSourceEndpoint,IAudioEndpointRT,IDeviceGraphObjectCache * &,__int64 &,IAudioMediaType * &,unsigned int &>(
        _QWORD *a1,
        struct IDeviceGraphObjectCache **a2,
        __int64 *a3,
        struct IAudioMediaType **a4,
        unsigned int *a5)
{
  CBridgeSourceEndpoint *v9; // rax
  CBridgeSourceEndpoint *v11; // rdi
  int v12; // ebx
  CBridgeSourceEndpoint *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CBridgeSourceEndpoint *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v9;
  if ( !v9 )
    return 2147942414LL;
  v11 = CBridgeSourceEndpoint::CBridgeSourceEndpoint(v9);
  v13 = 0LL;
  v12 = CBridgeSourceEndpoint::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
  if ( v12 >= 0 )
  {
    v12 = (**(__int64 (__fastcall ***)(CBridgeSourceEndpoint *, GUID *, _QWORD *))v11)(
            v11,
            &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
            a1);
    (*(void (__fastcall **)(CBridgeSourceEndpoint *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else if ( v11 )
  {
    (*(void (__fastcall **)(CBridgeSourceEndpoint *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v13);
  return (unsigned int)v12;
}
