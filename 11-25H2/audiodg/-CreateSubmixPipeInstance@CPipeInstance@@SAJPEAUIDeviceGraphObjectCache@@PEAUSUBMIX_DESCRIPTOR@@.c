/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024F54
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC24 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14002601C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400260E0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x1400262D8 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140026D74 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026F00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x1400392A4 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14005B1F4 (CreateAudioMediaType.c)
 *     WPP_SF_ @ 0x140065A40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14 #try_helpers=1
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v5; // r14d
  BOOL v6; // r12d
  int FxPropertyStore; // eax
  int v8; // eax
  unsigned int v9; // r15d
  struct IPropertyStore *v10; // rdi
  HRESULT v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  CPipeInstance *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  CPipeInstance *v17; // rdi
  int v18; // eax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  GUID v27; // xmm6
  __int64 v28; // rdx
  int v29; // eax
  int v30; // r8d
  int v31; // r13d
  __int64 v32; // [rsp+40h] [rbp-E8h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-E0h] BYREF
  int v34; // [rsp+4Ch] [rbp-DCh] BYREF
  int v35; // [rsp+50h] [rbp-D8h] BYREF
  HRESULT v36; // [rsp+54h] [rbp-D4h] BYREF
  int v37; // [rsp+58h] [rbp-D0h] BYREF
  int v38; // [rsp+5Ch] [rbp-CCh] BYREF
  int v39; // [rsp+60h] [rbp-C8h] BYREF
  int v40; // [rsp+64h] [rbp-C4h] BYREF
  __int64 v41; // [rsp+68h] [rbp-C0h] BYREF
  struct IPropertyStore *v42; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-B0h] BYREF
  struct IPropertyStore *v44; // [rsp+80h] [rbp-A8h]
  GUID v45; // [rsp+90h] [rbp-98h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-78h]
  __int128 v48; // [rsp+B8h] [rbp-70h]
  int v49; // [rsp+C8h] [rbp-60h]
  __int64 v51; // [rsp+138h] [rbp+10h] BYREF
  struct CPipeInstance **v52; // [rsp+140h] [rbp+18h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+148h] [rbp+20h] BYREF

  v52 = a3;
  v5 = 0;
  LODWORD(v51) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
  }
  *a3 = 0LL;
  v42 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v42);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v41 = 0LL;
  v8 = CProcessNode::CreateDummyProcessNode(v6, *((_QWORD *)a2 + 3), &v41);
  if ( v8 < 0 )
  {
    v34 = v8;
    throw (long *)&v34;
  }
  v51 = v41;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v46, &v51);
  v41 = 0LL;
  v9 = 0;
  v10 = v44;
  while ( v9 < *((_DWORD *)a2 + 23) )
  {
    v43 = 0LL;
    v26 = *((_DWORD *)a2 + 16);
    if ( _bittest(&v26, v9) )
    {
      v27 = *(GUID *)((char *)a2 + 68);
      v10 = v42;
      v44 = v42;
      if ( v42 )
        ((void (__fastcall *)(struct IPropertyStore *))v42->lpVtbl->AddRef)(v42);
      v5 |= 1u;
      v28 = (__int64)v10;
      v29 = 2;
      v30 = v6;
    }
    else
    {
      v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v30 = v6;
      v32 = 0LL;
      v5 |= 2u;
      v28 = 0LL;
      v29 = 0;
    }
    LODWORD(v51) = v5;
    v45 = v27;
    v31 = CAPOProcessNode::CreateAPOProcessNode((const struct _GUID *)a2 + v9 + 6, v28, v30, 0, v29, &v45, &v43);
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      if ( v10 )
        ((void (__fastcall *)(struct IPropertyStore *))v10->lpVtbl->Release)(v10);
    }
    if ( v31 < 0 )
    {
      v35 = v31;
      throw (long *)&v35;
    }
    v51 = v43;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v46, &v51);
    ++v9;
  }
  ppIAudioMediaType = 0LL;
  v11 = CreateAudioMediaType(*((const WAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &ppIAudioMediaType);
  if ( v11 < 0 )
  {
    v36 = v11;
    throw (long *)&v36;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v51 = 0LL;
      v24 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v25 = CProcessNode::CreateDummyProcessNode(v6, v24, &v51);
      if ( v25 < 0 )
      {
        v38 = v25;
        throw (long *)&v38;
      }
      v32 = v51;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v46, &v32);
    }
  }
  else
  {
    v51 = 0LL;
    v45 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v12 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v6, 1, 0, &v45, &v51);
    if ( v12 < 0 )
    {
      v37 = v12;
      throw (long *)&v37;
    }
    v13 = v51;
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v51 + 24LL))(v51, ppIAudioMediaType);
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, ppIAudioMediaType);
    v32 = v13;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v46, &v32);
  }
  v14 = (CPipeInstance *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v51 = (__int64)v14;
  if ( v14 )
    v17 = CPipeInstance::CPipeInstance(v14, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
  else
    v17 = 0LL;
  v51 = (__int64)v17;
  if ( !v17 )
  {
    v39 = -2147024882;
    throw (long *)&v39;
  }
  v18 = _AllocString<CTCoAllocPolicy>(v16, v15, *((_QWORD *)a2 + 4), (char *)v17 + 192);
  v19 = v18;
  if ( v18 < 0 )
  {
    v40 = v18;
    throw (long *)&v40;
  }
  *((_DWORD *)v17 + 30) = (unsigned int)(*(_DWORD *)a2 - 2) <= 1;
  *((_DWORD *)v17 + 33) = *(_DWORD *)a2;
  *((_DWORD *)v17 + 3) = v6;
  *((_DWORD *)v17 + 34) = *((_DWORD *)a2 + 16) != 0;
  v20 = *((_QWORD *)v17 + 19);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)v17 + 19) = 0LL;
  }
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)v17 + 240, a1);
  *(_QWORD *)v17 = 0LL;
  *((_DWORD *)v17 + 2) = 1;
  v21 = *((_QWORD *)&v46 + 1);
  while ( v21 )
  {
    v22 = v21;
    v21 = *(_QWORD *)(v21 + 8);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead((char *)v17 + 16, v22 + 16);
  }
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v46);
  *((_DWORD *)v17 + 84) = *((_BYTE *)a2 + 86) != 0;
  *((_DWORD *)v17 + 78) = *((unsigned __int8 *)a2 + 86);
  *((_DWORD *)v17 + 37) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                          / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                  * (double)(int)*((_QWORD *)a2 + 7)
                                                  / 10000000.0
                                                  + 0.5)
                                     * 1.1);
  *((_DWORD *)v17 + 35) = 0;
  *((_DWORD *)v17 + 53) = 0;
  *(_OWORD *)((char *)v17 + 216) = *(_OWORD *)((char *)a2 + 68);
  *((_BYTE *)v17 + 317) = *((_BYTE *)a2 + 85);
  *((_DWORD *)v17 + 32) = *((_DWORD *)a2 + 22);
  *v52 = v17;
  if ( ppIAudioMediaType )
    ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->Release)(ppIAudioMediaType);
  if ( v42 )
    ((void (__fastcall *)(struct IPropertyStore *))v42->lpVtbl->Release)(v42);
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v46);
  return v19;
}
