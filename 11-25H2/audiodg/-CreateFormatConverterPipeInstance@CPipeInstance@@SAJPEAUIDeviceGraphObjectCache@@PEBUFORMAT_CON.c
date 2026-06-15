/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026F5C
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140042184 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC24 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14002601C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400260E0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x1400262D8 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
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

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  BOOL v6; // r15d
  int v7; // eax
  const WAVEFORMATEX *v8; // rax
  int v9; // eax
  IAudioMediaType *v10; // rax
  __int64 v11; // rdx
  size_t v12; // rcx
  CPipeInstance *v13; // rdi
  int v14; // eax
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  HRESULT v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  int pExceptionObject; // [rsp+40h] [rbp-A8h] BYREF
  HRESULT v25; // [rsp+44h] [rbp-A4h] BYREF
  int v26; // [rsp+48h] [rbp-A0h] BYREF
  int v27; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v28; // [rsp+50h] [rbp-98h] BYREF
  int v29; // [rsp+54h] [rbp-94h] BYREF
  __int64 v30; // [rsp+58h] [rbp-90h] BYREF
  GUID v31; // [rsp+60h] [rbp-88h] BYREF
  __int128 v32; // [rsp+70h] [rbp-78h] BYREF
  __int64 v33; // [rsp+80h] [rbp-68h]
  __int128 v34; // [rsp+88h] [rbp-60h]
  int v35; // [rsp+98h] [rbp-50h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+F8h] [rbp+10h] BYREF
  struct CPipeInstance **v37; // [rsp+100h] [rbp+18h]
  IAudioMediaType *v38; // [rsp+108h] [rbp+20h] BYREF

  v37 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
  }
  *a3 = 0LL;
  v38 = 0LL;
  v7 = CProcessNode::CreateDummyProcessNode(v6, *((_QWORD *)a2 + 1), &v38);
  if ( v7 < 0 )
  {
    pExceptionObject = v7;
    throw (long *)&pExceptionObject;
  }
  ppIAudioMediaType = v38;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v32, &ppIAudioMediaType);
  v38 = 0LL;
  v8 = (const WAVEFORMATEX *)*((_QWORD *)a2 + 2);
  ppIAudioMediaType = 0LL;
  if ( *(_DWORD *)a2 )
  {
    v9 = CProcessNode::CreateDummyProcessNode(v6, v8, &ppIAudioMediaType);
    if ( v9 < 0 )
    {
      v27 = v9;
      throw (long *)&v27;
    }
    *(_QWORD *)&v31.Data1 = ppIAudioMediaType;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v32, &v31);
  }
  else
  {
    v21 = CreateAudioMediaType(v8, v8->cbSize + 18, &ppIAudioMediaType);
    if ( v21 < 0 )
    {
      v25 = v21;
      throw (long *)&v25;
    }
    v30 = 0LL;
    v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v22 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v6, 1, 0, &v31, &v30);
    if ( v22 < 0 )
    {
      v26 = v22;
      throw (long *)&v26;
    }
    v23 = v30;
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v30 + 24LL))(v30, ppIAudioMediaType);
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v23 + 32LL))(v23, ppIAudioMediaType);
    *(_QWORD *)&v31.Data1 = v23;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v32, &v31);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  }
  v10 = (IAudioMediaType *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  ppIAudioMediaType = v10;
  if ( v10 )
    v13 = CPipeInstance::CPipeInstance((CPipeInstance *)v10, (enum PIPE_TYPE)4);
  else
    v13 = 0LL;
  ppIAudioMediaType = (IAudioMediaType *)v13;
  if ( !v13 )
  {
    v28 = -2147024882;
    throw (long *)&v28;
  }
  v14 = _AllocString<CTCoAllocPolicy>(v12, v11, *((const wchar_t **)a2 + 4), (const wchar_t **)v13 + 24);
  v15 = v14;
  if ( v14 < 0 )
  {
    v29 = v14;
    throw (long *)&v29;
  }
  *((_DWORD *)v13 + 30) = (unsigned int)(*(_DWORD *)a2 - 2) <= 1;
  *((_DWORD *)v13 + 33) = *(_DWORD *)a2;
  *((_DWORD *)v13 + 3) = v6;
  *((_DWORD *)v13 + 34) = 0;
  v16 = *((_QWORD *)v13 + 19);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *((_QWORD *)v13 + 19) = 0LL;
  }
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((_QWORD *)v13 + 30, (__int64)a1);
  *(_QWORD *)v13 = 0LL;
  *((_DWORD *)v13 + 2) = 1;
  v17 = *((_QWORD *)&v32 + 1);
  while ( v17 )
  {
    v18 = v17;
    v17 = *(_QWORD *)(v17 + 8);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(
      (struct ATL::CAtlPlex **)v13 + 2,
      (_QWORD *)(v18 + 16));
  }
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v32);
  *((_DWORD *)v13 + 37) = (int)((float)((float)*(int *)(*((_QWORD *)a2 + 2) + 8LL)
                                      / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 12LL))
                              * (double)(int)*((_QWORD *)a2 + 3)
                              / 10000000.0
                              + 0.5);
  *((_DWORD *)v13 + 35) = 6;
  *((_DWORD *)v13 + 53) = 0;
  *(GUID *)((char *)v13 + 216) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  *((_DWORD *)v13 + 84) = 2;
  *v37 = v13;
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    v19 = WPP_GLOBAL_Control;
  }
  if ( v15 < 0 )
  {
    if ( v19 != &WPP_GLOBAL_Control && (*((_DWORD *)v19 + 7) & 0x20000) != 0 && *((_BYTE *)v19 + 25) >= 2u )
      WPP_SF_D(v19[2], 18LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x258u, v15);
  }
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v32);
  return (unsigned int)v15;
}
