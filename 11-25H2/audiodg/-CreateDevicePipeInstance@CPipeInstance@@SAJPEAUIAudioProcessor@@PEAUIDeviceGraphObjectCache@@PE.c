/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC24 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14002601C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400260E0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x1400262D8 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026438 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140026D74 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026F00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400359CC (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x1400392A4 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     WPP_SF_ @ 0x140065A40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14006BD7C (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        __int64 a2,
        __int64 a3,
        CPipeInstance **a4)
{
  int v5; // r12d
  int v6; // r13d
  int FxPropertyStore; // eax
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  struct IPropertyStore *v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  CPipeInstance *v14; // rax
  CPipeInstance *v15; // rax
  CPipeInstance *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // edx
  int v20; // ecx
  GUID v21; // xmm6
  int v22; // r13d
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // r13d
  int EndpointGuidFromEndpointId; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _BYTE *v34; // rdx
  CPipeInstance *v35; // rcx
  _QWORD *v36; // rcx
  int v38; // eax
  int v39; // eax
  _BYTE v40[32]; // [rsp+0h] [rbp-168h] BYREF
  struct CDeviceProcessNode *v41; // [rsp+40h] [rbp-128h] BYREF
  int v42; // [rsp+48h] [rbp-120h]
  struct CDeviceProcessNode *v43; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-110h]
  struct CDeviceProcessNode *v45; // [rsp+60h] [rbp-108h] BYREF
  void (__fastcall ***v46)(_QWORD, __int64); // [rsp+68h] [rbp-100h] BYREF
  struct CDeviceProcessNode *v47; // [rsp+70h] [rbp-F8h] BYREF
  CPipeInstance *v48; // [rsp+78h] [rbp-F0h]
  GUID v49; // [rsp+80h] [rbp-E8h] BYREF
  int v50; // [rsp+90h] [rbp-D8h] BYREF
  int v51; // [rsp+94h] [rbp-D4h] BYREF
  int v52; // [rsp+98h] [rbp-D0h] BYREF
  int v53; // [rsp+9Ch] [rbp-CCh] BYREF
  int v54; // [rsp+A0h] [rbp-C8h] BYREF
  int v55; // [rsp+A4h] [rbp-C4h] BYREF
  int v56; // [rsp+A8h] [rbp-C0h] BYREF
  int v57; // [rsp+ACh] [rbp-BCh] BYREF
  int v58; // [rsp+B0h] [rbp-B8h] BYREF
  int v59; // [rsp+B4h] [rbp-B4h] BYREF
  int pExceptionObject; // [rsp+B8h] [rbp-B0h] BYREF
  struct IPropertyStore *v61; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-90h]
  __int128 v64; // [rsp+E0h] [rbp-88h]
  int v65; // [rsp+F0h] [rbp-78h]
  struct IPropertyStore *v66; // [rsp+F8h] [rbp-70h]
  __int64 v67; // [rsp+100h] [rbp-68h]
  long *v68; // [rsp+108h] [rbp-60h] BYREF
  ATL::CAtlException *v69; // [rsp+110h] [rbp-58h] BYREF
  struct CDeviceProcessNode *v72; // [rsp+180h] [rbp+18h] BYREF
  CPipeInstance **v73; // [rsp+188h] [rbp+20h]

  v73 = a4;
  try
  {
    v5 = 0;
    v42 = 0;
    v47 = 0LL;
    v48 = 0LL;
    v41 = 0LL;
    v46 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 10;
    LODWORD(v72) = 0;
    v6 = 0;
    LODWORD(v43) = 0;
    v61 = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    }
    FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v61);
    if ( FxPropertyStore < 0 )
    {
      v50 = FxPropertyStore;
      throw (long *)&v50;
    }
    v9 = *(_QWORD *)(a3 + 24);
    if ( v9 )
    {
      v33 = CProcessNode::CreateDummyProcessNode(*(unsigned int *)(a3 + 72), v9, &v46);
      if ( v33 < 0 )
      {
        v51 = v33;
        throw (long *)&v51;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v46);
      v46 = 0LL;
    }
    if ( !*(_DWORD *)(a3 + 72) )
    {
      LODWORD(v72) = 1;
      if ( AudioDgTelemetryProvider::IsEnabled(v8, v9) )
        v6 = 1;
      LODWORD(v43) = v6;
    }
    v10 = 0;
    v11 = v66;
    v12 = v67;
    while ( 1 )
    {
      v44 = v10;
      if ( v10 >= *(_DWORD *)(a3 + 96) )
      {
        if ( (_DWORD)v72 )
        {
          v49 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v31 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v49,
                  &v41);
          if ( v31 < 0 )
          {
            v55 = v31;
            throw (long *)&v55;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v72);
          v41 = 0LL;
        }
        if ( v6 )
        {
          v49 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v32 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v49,
                  &v41);
          if ( v32 < 0 )
          {
            v56 = v32;
            throw (long *)&v56;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v72);
          v41 = 0LL;
        }
        v13 = CDeviceProcessNode::CreateDeviceProcessNode((struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3, &v47);
        if ( v13 < 0 )
        {
          v57 = v13;
          throw (long *)&v57;
        }
        v72 = v47;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v72);
        v47 = 0LL;
        v14 = (CPipeInstance *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
        v72 = v14;
        if ( v14 )
        {
          v15 = CPipeInstance::CPipeInstance(v14, READ_DATA_PIPE);
          v16 = v15;
          v48 = v15;
          if ( v15 )
          {
            *(_OWORD *)((char *)v15 + 296) = *(_OWORD *)(a3 + 148);
            *((_DWORD *)v15 + 3) = *(_DWORD *)(a3 + 72);
            *((_DWORD *)v15 + 34) = *(_DWORD *)(a3 + 80) != 0;
            *((_DWORD *)v15 + 31) = *(_DWORD *)(a3 + 100) == 1;
            *((_DWORD *)v15 + 32) = *(_DWORD *)(a3 + 100);
            if ( *((struct IUnknown **)v15 + 19) != a1 )
              ATL::AtlComPtrAssign((struct IUnknown **)v15 + 19, a1);
            ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)v16 + 240, a2);
            v17 = *((_QWORD *)&v62 + 1);
            while ( v17 )
            {
              v18 = v17;
              v17 = *(_QWORD *)(v17 + 8);
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead((char *)v16 + 16, v18 + 16);
            }
            *((_DWORD *)v16 + 53) = *(_DWORD *)(a3 + 88) != -1;
            *((_DWORD *)v16 + 78) = *(_DWORD *)(a3 + 144);
            *((_OWORD *)v16 + 20) = *(_OWORD *)(a3 + 196);
            EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v16 + 160);
            if ( EndpointGuidFromEndpointId < 0 )
            {
              v58 = EndpointGuidFromEndpointId;
              throw (long *)&v58;
            }
            v29 = _AllocString<CTCoAllocPolicy>(v28, v27, *(_QWORD *)(a3 + 56), (char *)v16 + 192);
            v30 = v29;
            if ( v29 < 0 )
            {
              v59 = v29;
              throw (long *)&v59;
            }
            *((_DWORD *)v16 + 37) = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                                                / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                                        * (double)(int)*(_QWORD *)(a3 + 32)
                                        / 10000000.0
                                        + 0.5);
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
            }
            goto LABEL_105;
          }
        }
        else
        {
          v48 = 0LL;
        }
        pExceptionObject = -2147024882;
        throw (long *)&pExceptionObject;
      }
      v19 = *(_DWORD *)(a3 + 80) & (1 << v10);
      LODWORD(v45) = v19;
      v20 = (1 << v10) & *(_DWORD *)(a3 + 92);
      v42 = v20;
      if ( !v19 )
        goto LABEL_19;
      if ( *(_DWORD *)(a3 + 88) == v10 )
      {
        if ( (_DWORD)v72 )
        {
          v49 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v38 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v49,
                  &v41);
          if ( v38 < 0 )
          {
            v52 = v38;
            throw (long *)&v52;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v72);
          v41 = 0LL;
          LODWORD(v72) = 0;
          v20 = v42;
        }
        if ( v6 )
        {
          v49 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v39 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v49,
                  &v41);
          if ( v39 < 0 )
          {
            v53 = v39;
            throw (long *)&v53;
          }
          v43 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v43);
          v41 = 0LL;
          v6 = 0;
          LODWORD(v43) = 0;
          v20 = v42;
        }
      }
      v19 = (int)v45;
      if ( v20 )
      {
LABEL_19:
        LODWORD(v43) = v6;
        v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        if ( !v19 )
        {
          v22 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        v21 = *(GUID *)(a3 + 120);
      }
      v22 = (v20 != 0) + 2;
LABEL_21:
      v23 = *(_DWORD *)(a3 + 72);
      LODWORD(v45) = v23;
      if ( v19 )
      {
        v11 = v61;
        v66 = v61;
        if ( v61 )
        {
          ((void (__fastcall *)(struct IPropertyStore *))v61->lpVtbl->AddRef)(v61);
          v23 = (int)v45;
        }
        v5 |= 1u;
        v24 = (__int64)v11;
      }
      else
      {
        v12 = 0LL;
        v67 = 0LL;
        v5 |= 2u;
        v24 = 0LL;
      }
      v42 = v5;
      v49 = v21;
      v25 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)(a3 + 16LL * v44 + 216),
              v24,
              v23,
              0,
              v22,
              &v49,
              &v41);
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        v42 = v5;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        if ( v11 )
          ((void (__fastcall *)(struct IPropertyStore *))v11->lpVtbl->Release)(v11);
      }
      if ( v25 < 0 )
      {
        v54 = v25;
        throw (long *)&v54;
      }
      v45 = v41;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v45);
      v41 = 0LL;
      v10 = v44 + 1;
      v6 = (int)v43;
    }
  }
  catch ( long *v68 )
  {
    v34 = v40;
    LODWORD(v72) = *(_DWORD *)v68;
    goto LABEL_59;
  }
  catch ( ATL::CAtlException *v69 )
  {
    v34 = v40;
    LODWORD(v72) = *(_DWORD *)v69;
LABEL_59:
    v30 = (int)v72;
    if ( (int)v72 < 0 )
    {
      if ( v46 )
        (**v46)(v46, 1LL);
      if ( v41 )
        (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v41)(v41, 1LL);
      if ( v47 )
        (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v47)(v47, 1LL);
      v35 = v48;
      if ( !v48 )
      {
        CleanupProcessNodeList(&v62);
        goto LABEL_62;
      }
LABEL_94:
      CPipeInstance::`scalar deleting destructor'(v35, (unsigned int)v34);
      goto LABEL_62;
    }
    v16 = v48;
  }
LABEL_105:
  LODWORD(v34) = (_DWORD)v73;
  v35 = *v73;
  *v73 = v16;
  if ( v35 )
    goto LABEL_94;
LABEL_62:
  v36 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    v36 = WPP_GLOBAL_Control;
  }
  if ( v30 < 0 )
  {
    if ( v36 != &WPP_GLOBAL_Control && (*((_DWORD *)v36 + 7) & 0x20000) != 0 && *((_BYTE *)v36 + 25) >= 2u )
      WPP_SF_D(v36[2], 13LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x146u, v30);
  }
  if ( v61 )
    ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v61->lpVtbl->Release)(v61, v61->lpVtbl);
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v62);
  return (unsigned int)v30;
}
