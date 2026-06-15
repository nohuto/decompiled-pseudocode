/*
 * XREFs of ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140040600 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x140058474 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ?GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z @ 0x140067530 (-GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z.c)
 *     ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAI5@Z @ 0x140067AEC (--$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBridgeSinkProcessNode::CreateStreamInstance(
        CBridgeSinkProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        __int64 a4,
        unsigned int a5,
        struct ICrossProcessMemory **a6,
        struct ICrossProcessEvent **a7,
        struct SYSTEM_AUDIO_STREAM *a8)
{
  int StreamInstance; // eax
  unsigned int v11; // ebx
  int BridgeSourceEndpoint; // eax
  struct IBridgeSourceEndpointControl *v13; // rbx
  unsigned int v14; // r14d
  int v15; // edi
  struct ICrossProcessMemory *v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  __int64 v21; // [rsp+48h] [rbp-39h] BYREF
  struct IBridgeSourceEndpointControl *v22; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-21h] BYREF
  int v25; // [rsp+68h] [rbp-19h] BYREF
  struct SYSTEM_AUDIO_STREAM *v26; // [rsp+70h] [rbp-11h] BYREF
  struct ICrossProcessMemory *v27; // [rsp+78h] [rbp-9h] BYREF
  struct IDeviceGraphObjectCache *v28; // [rsp+80h] [rbp-1h] BYREF
  CEndpointInstance *v29; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+3Fh]

  v29 = 0LL;
  StreamInstance = CStreamProcessNode::CreateStreamInstance(this, a2, a3, a4, a5, a6, a7, a8);
  v11 = StreamInstance;
  if ( StreamInstance >= 0 )
  {
    v22 = 0LL;
    BridgeSourceEndpoint = GetBridgeSourceEndpoint(*((_QWORD *)a2 + 38), &v22);
    v11 = BridgeSourceEndpoint;
    if ( BridgeSourceEndpoint >= 0 )
    {
      v21 = 0LL;
      v13 = v22;
      v14 = (*(__int64 (__fastcall **)(struct IBridgeSourceEndpointControl *))(*(_QWORD *)v22 + 32LL))(v22);
      v15 = *((_DWORD *)a2 + 78);
      v16 = *a6;
      v23 = a5;
      v24 = v14;
      v25 = v15;
      v26 = a8;
      v27 = v16;
      v28 = a3;
      v21 = 0LL;
      v17 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeToRenderGraph,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,ICrossProcessMemory * &,SYSTEM_AUDIO_STREAM * &,unsigned long &,unsigned int &,unsigned int &>(
              &v21,
              &v28,
              &v27,
              &v26,
              (unsigned int *)&v25,
              &v24,
              &v23);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDD,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
          (const char *)(unsigned int)v17);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
          (const char *)v18);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
        v11 = v18;
        goto LABEL_11;
      }
      v19 = (*(__int64 (__fastcall **)(struct IBridgeSourceEndpointControl *, __int64))(*(_QWORD *)v13 + 24LL))(
              v13,
              v21);
      v11 = v19;
      if ( v19 >= 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
        v11 = 0;
        goto LABEL_11;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v19);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D1,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)BridgeSourceEndpoint);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CD,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)StreamInstance);
  }
LABEL_11:
  std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v29);
  return v11;
}
