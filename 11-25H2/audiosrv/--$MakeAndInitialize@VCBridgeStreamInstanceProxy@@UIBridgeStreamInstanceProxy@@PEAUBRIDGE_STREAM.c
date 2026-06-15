/*
 * XREFs of ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Z @ 0x1800B6230
 * Callers:
 *     _lambda_baf91932bba23b188ac8d4bf8a9d39cd_::operator() @ 0x1800B80B4 (_lambda_baf91932bba23b188ac8d4bf8a9d39cd_--operator().c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180065E1C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCStreamInstanceProxyIm.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@_J@Z @ 0x1800F337C (-RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,BRIDGE_STREAM_DESCRIPTOR *,IStreamGroupProxy * &,__int64 &>(
        _QWORD *a1,
        struct BRIDGE_STREAM_DESCRIPTOR **a2,
        struct IStreamGroupProxy **a3,
        __int64 *a4)
{
  _QWORD *v8; // rbx
  int v9; // edi
  __int64 v10; // rax
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  if ( v8 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CStreamInstanceProxyImpl,IStreamInstanceProxy>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CStreamInstanceProxyImpl,IStreamInstanceProxy>();
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v8[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v8[5] = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v12 = 0LL;
    v9 = CBridgeStreamInstanceProxy::RuntimeClassInitialize((CBridgeStreamInstanceProxy *)v8, *a2, *a3, *a4);
    v10 = *v8;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v10)(
             v8,
             &GUID_bf2d2329_18b4_4ac6_a896_d9b5b4b18b74,
             a1);
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v10 + 16))(v8);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v12);
  return (unsigned int)v9;
}
