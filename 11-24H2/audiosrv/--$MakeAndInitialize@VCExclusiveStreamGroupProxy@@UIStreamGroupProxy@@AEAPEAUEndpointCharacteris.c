/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180074A28
 * Callers:
 *     ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180058DA0 (-CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceG.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180049140 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroup.c)
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x18004B1D0 (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18007C5C4 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
        _QWORD *a1,
        struct EndpointCharacteristicsDescriptor **a2,
        const struct StreamGroupParams **a3,
        struct STREAM_GROUP_DESCRIPTOR **a4,
        unsigned int *a5)
{
  CExclusiveStreamGroupProxy *v9; // rax
  CExclusiveStreamGroupProxy *v11; // rbx
  int v12; // edi
  CExclusiveStreamGroupProxy *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CExclusiveStreamGroupProxy *)operator new(0x2C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v9;
  if ( !v9 )
    return 2147942414LL;
  v11 = CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(v9);
  v13 = 0LL;
  v12 = CExclusiveStreamGroupProxy::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
  if ( v12 >= 0 )
    v12 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>>(
            (__int64)v11,
            &GUID_040fc393_aad6_453d_9a52_2ea63773235d,
            a1);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release((__int64)v11);
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
  return (unsigned int)v12;
}
