/*
 * XREFs of _lambda_8dedf90f1f70af288e66d072af95fd4f_::operator() @ 0x180131CB4
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003B694 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18002F368 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003ADB4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_8dedf90f1f70af288e66d072af95fd4f_::operator()(
        _DWORD *a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // rsi
  int DefaultEffectChainClsids; // eax
  void *v10; // rbx
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rdx
  int v19; // [rsp+40h] [rbp-21h] BYREF
  int v20; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  void *v23; // [rsp+60h] [rbp-1h] BYREF
  __int128 v24; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+80h] [rbp+1Fh] BYREF
  int v26; // [rsp+88h] [rbp+27h]
  int v27; // [rsp+8Ch] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  unsigned int v29; // [rsp+D8h] [rbp+77h] BYREF

  pv = 0LL;
  v29 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  if ( a4 )
    *a4 = 0LL;
  v8 = a5;
  if ( a5 )
    *a5 = 0LL;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a2,
                               (struct CAudioSignalProcessingModeArray *)&v25,
                               &v29,
                               (struct _GUID **)&pv);
  v10 = pv;
  if ( DefaultEffectChainClsids < 0
    || !v29
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64)&v25, a3) == -1 )
  {
    goto LABEL_14;
  }
  v21 = 0LL;
  v23 = v10;
  LODWORD(a5) = v11;
  *(_QWORD *)&v24 = *(_QWORD *)(*(_QWORD *)a1 + 2120LL);
  v29 = 0;
  v19 = 0;
  v20 = 1;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
          &v21,
          &v24,
          &v20,
          &v19,
          (int *)&v29,
          (unsigned int *)&a5,
          (__int64 *)&v23);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = *v21;
    v16 = a1[2];
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1584LL) + 40LL);
    v24 = *(_OWORD *)a3;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, _QWORD, int, _QWORD *, _QWORD *))(v15 + 24))(
            v21,
            v17,
            &v24,
            0LL,
            v16,
            a4,
            v8);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 2776LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  v14 = 2775LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_15:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v25);
  CoTaskMemFree(v10);
  return v13;
}
