/*
 * XREFs of ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14004A088
 * Callers:
 *     ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C0C4 (-CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ?CreateBridgeToApoAuxInput@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioMediaType@@IPEAUIAudioProcessingObject@@@Z @ 0x14004A2C8 (-CreateBridgeToApoAuxInput@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@PEAUIDeviceGraphObjectCache.c)
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A32C (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x140058474 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBridgeToAPOProcessNode::CreateBridgeToApo(
        struct IAudioMediaType **this,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        unsigned int a5)
{
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  CEndpointInstance *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  CEndpointInstance *v16; // rax
  CEndpointInstance *v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  CEndpointInstance **v20; // [rsp+40h] [rbp-20h]
  IAudioEndpointRT v21; // [rsp+48h] [rbp-18h] BYREF
  char v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IBridgeSourceEndpointConsumer *v24; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF

  v18 = 0LL;
  v20 = &v18;
  v21.lpVtbl = 0LL;
  v22 = 1;
  v9 = a5;
  v10 = CEndpointInstance::CreateBridgeSourceEndpointInstance(a2, *((_QWORD *)a3 + 3), this[6], a5, &v21);
  if ( v22 )
  {
    v11 = *v20;
    *v20 = (CEndpointInstance *)v21.lpVtbl;
    if ( v11 )
      CEndpointInstance::`scalar deleting destructor'(v11);
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)v10);
LABEL_22:
    std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v18);
    return v10;
  }
  v24 = 0LL;
  v12 = CreateBridgeToApoAuxInput(&v24, a2, a3, this[6], v9, a4);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x351,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v12);
LABEL_8:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
    goto LABEL_22;
  }
  v25 = 0LL;
  v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v18)(
          *(_QWORD *)v18,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v25);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v19 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
            v25,
            &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5,
            &v19);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, struct IBridgeSourceEndpointConsumer *))(*(_QWORD *)v19 + 24LL))(
              v19,
              v24);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v16 = v18;
        v18 = 0LL;
        this[4] = (struct IAudioMediaType *)v16;
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
        v10 = 0;
        goto LABEL_22;
      }
      v15 = 858LL;
    }
    else
    {
      v15 = 855LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v14);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x354,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)(unsigned int)v13);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(struct IBridgeSourceEndpointConsumer *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v18 )
    CEndpointInstance::`scalar deleting destructor'(v18);
  return v10;
}
