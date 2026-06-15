/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056B5C
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800911E0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x180056C40 (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056D60 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4)
{
  CAPOWrapperClient *v8; // rax
  CAPOWrapperClient *v9; // rdi
  int v10; // ebx
  CAPOWrapperClient *v12; // [rsp+20h] [rbp-28h]
  CAPOWrapperClient *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CAPOWrapperClient *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
    return (unsigned int)v10;
  }
  v9 = CAPOWrapperClient::CAPOWrapperClient(v8);
  v13 = 0LL;
  v10 = CAPOWrapperClient::RuntimeClassInitialize(v9, *a2, *a3, a4, v12, v9);
  if ( v10 < 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_8;
  }
  v10 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, _QWORD *))v9)(
          v9,
          &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
          a1);
  (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}
