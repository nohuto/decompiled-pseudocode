/*
 * XREFs of ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A32C
 * Callers:
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14004A088 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C900 (-CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDe.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z @ 0x140045938 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z.c)
 *     ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A538 (--$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointInstance::CreateBridgeSourceEndpointInstance(
        struct IDeviceGraphObjectCache *a1,
        __int64 a2,
        struct IAudioMediaType *a3,
        int a4,
        struct IUnknown *a5)
{
  struct IUnknown *v5; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edi
  CEndpointInstance *v10; // rax
  CEndpointInstance *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  struct IAudioMediaType *v13; // [rsp+60h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+30h] BYREF
  struct IDeviceGraphObjectCache *v15; // [rsp+70h] [rbp+38h] BYREF
  int v16; // [rsp+78h] [rbp+40h] BYREF

  v5 = a5;
  v6 = 0;
  a5->lpVtbl = 0LL;
  v16 = a4;
  v13 = a3;
  v14 = a2;
  v15 = a1;
  a5 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeSourceEndpoint,IAudioEndpointRT,IDeviceGraphObjectCache * &,__int64 &,IAudioMediaType * &,unsigned int &>(
         (unsigned int)&a5,
         (unsigned int)&v15,
         (unsigned int)&v14,
         (unsigned int)&v13,
         (__int64)&v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (CEndpointInstance *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = (struct IAudioMediaType *)v10;
    if ( v10 )
    {
      v11 = CEndpointInstance::CEndpointInstance(v10, a5, 0LL);
      v5->lpVtbl = (struct IUnknownVtbl *)v11;
      if ( v11 )
      {
LABEL_10:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&a5);
        return v6;
      }
    }
    else
    {
      v5->lpVtbl = 0LL;
    }
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x91,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
    (const char *)(unsigned int)v7);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x256,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)v8);
  if ( a5 )
    ((void (__fastcall *)(struct IUnknown *))a5->lpVtbl->Release)(a5);
  return v8;
}
