/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18002F368
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     _lambda_8dedf90f1f70af288e66d072af95fd4f_::operator() @ 0x180131CB4 (_lambda_8dedf90f1f70af288e66d072af95fd4f_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCompositeSystemEffect@@QEAA@XZ @ 0x180030CEC (--0CCompositeSystemEffect@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        __int64 *a7)
{
  CCompositeSystemEffect *v11; // rax
  CCompositeSystemEffect *v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // ebp
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  unsigned int i; // esi
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  bool v23; // sf
  unsigned int v25; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CCompositeSystemEffect *v27; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CCompositeSystemEffect *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v27 = v11;
  if ( v11 )
  {
    v12 = CCompositeSystemEffect::CCompositeSystemEffect(v11);
    v27 = 0LL;
    v13 = *a7;
    v14 = *a6;
    v15 = *a5;
    v16 = *a4;
    v17 = *a3;
    *((_QWORD *)v12 + 9) = *a2;
    *((_DWORD *)v12 + 20) = v17;
    *((_DWORD *)v12 + 21) = v16;
    *((_DWORD *)v12 + 22) = v15;
    for ( i = 0; i < v14; ++i )
    {
      v19 = *((_DWORD *)v12 + 26);
      if ( v19 == *((_DWORD *)v12 + 27) )
      {
        if ( *((_DWORD *)v12 + 27) )
        {
          v23 = (v19 & 0x40000000) != 0;
          v20 = 2 * v19;
          if ( v23 )
            goto LABEL_14;
        }
        else
        {
          v20 = 1;
        }
        if ( v20 > 0x7FFFFFFuLL || (v21 = _o__recalloc(*((_QWORD *)v12 + 12), v20, 16LL)) == 0 )
        {
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D9,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v12 + 16LL))(v12);
          goto LABEL_15;
        }
        *((_DWORD *)v12 + 27) = v20;
        *((_QWORD *)v12 + 12) = v21;
      }
      v22 = (_OWORD *)(*((_QWORD *)v12 + 12) + 16LL * *((int *)v12 + 26));
      if ( v22 )
        *v22 = *(_OWORD *)(v13 + 16LL * i);
      ++*((_DWORD *)v12 + 26);
    }
    v25 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, _QWORD *))v12)(
            v12,
            &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
            a1);
    (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v12 + 16LL))(v12);
    return v25;
  }
  else
  {
LABEL_15:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v27);
    return 2147942414LL;
  }
}
