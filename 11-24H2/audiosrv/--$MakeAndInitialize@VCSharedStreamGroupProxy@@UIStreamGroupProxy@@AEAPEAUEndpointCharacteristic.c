/*
 * XREFs of ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18004B234
 * Callers:
 *     ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180058DA0 (-CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceG.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180049140 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroup.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x18004B3E0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x18004B7B0 (--0CSharedStreamGroupProxy@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,IAudioModeEffectsWatcher *>(
        _QWORD *a1,
        struct EndpointCharacteristicsDescriptor **a2,
        const struct StreamGroupParams **a3,
        struct STREAM_GROUP_DESCRIPTOR **a4,
        unsigned int *a5,
        struct IAudioModeEffectsWatcher **a6)
{
  CSharedStreamGroupProxy *v10; // rax
  CSharedStreamGroupProxy *v11; // rbx
  int v12; // esi
  unsigned int v14; // edi
  CSharedStreamGroupProxy *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CSharedStreamGroupProxy *)operator new(0x718uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v10;
  if ( !v10 )
  {
    v14 = -2147024882;
LABEL_9:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v15);
    return v14;
  }
  v11 = CSharedStreamGroupProxy::CSharedStreamGroupProxy(v10);
  v15 = 0LL;
  v12 = CSharedStreamGroupProxy::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
  if ( v12 >= 0 )
  {
    v14 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>>(
            (__int64)v11,
            &GUID_040fc393_aad6_453d_9a52_2ea63773235d,
            a1);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(v11);
    goto LABEL_9;
  }
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(v11);
  return (unsigned int)v12;
}
