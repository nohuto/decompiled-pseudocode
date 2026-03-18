/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801D3728
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18006CBB0 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     AppendShaderBody @ 0x1801D26B0 (AppendShaderBody.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1801D284C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     DiscoverSamplers @ 0x1801D3EA8 (DiscoverSamplers.c)
 *     InitializeShaderLinkingInput @ 0x1801D3F58 (InitializeShaderLinkingInput.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1801D427C (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     GetExpectedVertexShaderDesc @ 0x1801D42FC (GetExpectedVertexShaderDesc.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801D43B0 (--1-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uhash_.c)
 *     LoadShaderBody @ 0x1801D44A4 (LoadShaderBody.c)
 *     UseFragmentsModuleNoRef @ 0x1801D486C (UseFragmentsModuleNoRef.c)
 *     PrepareSamplers @ 0x1801D4A1C (PrepareSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x1801D4B60 (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     HasWhiteNoise @ 0x1801D4DFC (HasWhiteNoise.c)
 *     AppendLights @ 0x180236874 (AppendLights.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, __int64 *a3, ULONGLONG a4, ULONGLONG a5)
{
  __int64 v5; // r15
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // al
  unsigned int v21; // r10d
  int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  char v25; // r12
  _QWORD *i; // rdi
  __int64 ExpectedVertexShaderDesc; // rax
  int v28; // eax
  unsigned int v29; // edi
  int v30; // eax
  void *v31; // r15
  int v32; // eax
  int v33; // r12d
  unsigned int j; // r14d
  unsigned int *v35; // r14
  int v36; // r8d
  int v37; // eax
  int v38; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v39; // rdx
  int v40; // eax
  __int64 v41; // r8
  unsigned int *v43; // rbx
  int v44; // r8d
  int ShaderBody; // eax
  int v46; // eax
  int v47; // r15d
  unsigned int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int appended; // eax
  int v53; // eax
  int v54; // eax
  bool v55; // zf
  struct _EVENT_DATA_DESCRIPTOR *v56; // rax
  int v57; // eax
  __int64 v58[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v59; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v60[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v61; // [rsp+70h] [rbp-90h]
  __int128 v62; // [rsp+80h] [rbp-80h]
  __int128 v63; // [rsp+90h] [rbp-70h]
  struct ID3D11Linker *ppLinker; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v66[80]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v69[2]; // [rsp+120h] [rbp+20h] BYREF
  int v70; // [rsp+140h] [rbp+40h] BYREF
  __int16 v71; // [rsp+144h] [rbp+44h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v73[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v74[12]; // [rsp+170h] [rbp+70h] BYREF
  char v75; // [rsp+17Ch] [rbp+7Ch]
  char v76; // [rsp+17Dh] [rbp+7Dh]

  v5 = a1;
  *(_QWORD *)&v59 = a1;
  v68.Ptr = a5;
  v72.Ptr = a4;
  *(_QWORD *)&v62 = a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)&ppLinker);
  *(_QWORD *)&v61 = 0LL;
  v9 = 0LL;
  v58[0] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1u,
      &v67);
  v10 = *a3;
  v60[1] = (unsigned int *)v69;
  v11 = 0;
  v70 = *(_DWORD *)(v5 + 40);
  v12 = (_QWORD *)a3[1];
  memset(v69, 0, sizeof(v69));
  v60[0] = (unsigned int *)4;
  v13 = v12;
  v14 = &v12[v10];
  *(_QWORD *)&v63 = v12;
  v73[0] = v10;
  if ( v12 != v14 )
  {
    v47 = v70;
    do
    {
      v47 += *(_DWORD *)(*v13 + 40LL);
      v48 = DiscoverSamplers(*v13, v60);
      if ( v11 <= v48 )
        v11 = v48;
      ++v13;
    }
    while ( v13 != v14 );
    v70 = v47;
    v5 = v59;
  }
  v15 = DiscoverSamplers(v5, v60);
  if ( v11 <= v15 )
    v11 = v15;
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v60[0]) = v11;
  do
  {
    v19 = (unsigned int)v18;
    if ( (unsigned int)v18 >= 4uLL )
      goto LABEL_61;
    v20 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(a2 + 32LL * (unsigned int)v18));
    v18 = (unsigned int)(v22 + 1);
    *((_BYTE *)v69 + v16 + 2) = v20;
    if ( v20 )
    {
      v23 = v17;
      v17 = (unsigned int)(v17 + 1);
      *(_DWORD *)((char *)v69 + v16 + 4) = v23;
      v24 = v18;
      if ( v21 > (unsigned int)v18 )
        v24 = v21;
      LODWORD(v60[0]) = v24;
    }
  }
  while ( (unsigned int)v18 < 4 );
  v25 = HasWhiteNoise(v5);
  if ( !v25 )
  {
    for ( i = (_QWORD *)v63; i != v14; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v25 = 1;
        break;
      }
    }
  }
  v67 = *(struct _EVENT_DATA_DESCRIPTOR *)v62;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(v5, (unsigned int)&v67, a2, v11, v25);
  *(_QWORD *)v72.Ptr = ExpectedVertexShaderDesc;
  v28 = InitializeShaderLinkingInput(&ppLinker);
  v29 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x4E6u, 0LL);
    goto LABEL_35;
  }
  v30 = UseFragmentsModuleNoRef((CShaderLinkingGraphBuilder *)&ppLinker);
  v29 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x4E7u, 0LL);
  }
  else
  {
    v31 = (void *)v61;
    if ( v11 > 2 || v25 )
    {
      v72.Ptr = 3LL;
      v71 = 258;
      v70 = 16843008;
      *(_QWORD *)&v72.Size = &v70;
      v67 = v72;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (__int64)&ppLinker,
                   v25 != 0 ? 12 : 259,
                   (__int64)word_180336D88,
                   v61,
                   (__int64)"DecodeTexcoord3",
                   (__int128 *)&v67);
      v29 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x4F3u, 0LL);
        goto LABEL_35;
      }
    }
    LOBYTE(v70) = 0;
    gsl::details::extent_type<-1>::extent_type<-1>(&v72, LODWORD(v60[0]));
    *(_QWORD *)&v72.Size = v69;
    if ( v72.Ptr == -1LL )
    {
LABEL_61:
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        v19,
        v18,
        v16,
        v17);
      __debugbreak();
    }
    v32 = PrepareSamplers(&ppLinker, a2, &v72);
    v29 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x500u, 0LL);
    }
    else
    {
      v33 = 0;
      for ( j = 0; j < *(_DWORD *)v62; ++j )
      {
        if ( (unsigned __int64)j >= v73[0] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        _mm_lfence();
        v43 = *(unsigned int **)(v63 + 8LL * j);
        v75 = j + 48;
        v60[0] = v43;
        qmemcpy(v74, "BodyFragment", sizeof(v74));
        v76 = 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v58);
        ShaderBody = LoadShaderBody((unsigned int)&ppLinker, (_DWORD)v43, v44, v33, (__int64)v74, (__int64)v58);
        v29 = ShaderBody;
        if ( ShaderBody < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderBody, 0x50Bu, 0LL);
          goto LABEL_55;
        }
        v31 = (void *)v61;
        v9 = v58[0];
        v46 = AppendShaderBody((__int64)&ppLinker, j | 0x500, v60[0], a2, (__int64)v74, v58[0], (void *)v61, &v70);
        v29 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x50Cu, 0LL);
          goto LABEL_35;
        }
        v33 += v60[0][10];
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v58);
      v35 = (unsigned int *)v59;
      v37 = LoadShaderBody((unsigned int)&ppLinker, v59, v36, v33, (__int64)word_180336D88, (__int64)v58);
      v29 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x512u, 0LL);
LABEL_55:
        v9 = v58[0];
        goto LABEL_35;
      }
      v9 = v58[0];
      v38 = AppendShaderBody((__int64)&ppLinker, 0xAu, v35, a2, (__int64)word_180336D88, v58[0], v31, &v70);
      v29 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x513u, 0LL);
        goto LABEL_35;
      }
      if ( *(_BYTE *)(a2 + 133)
        && (*(_QWORD *)&v59 = 5LL,
            *((_QWORD *)&v59 + 1) = &unk_1803AA748,
            v54 = CShaderLinkingGraphBuilder::AppendNode(
                    (__int64)&ppLinker,
                    10,
                    (__int64)word_180336D88,
                    (__int64)v31,
                    (__int64)"ApplyPSClipPlanes",
                    &v59),
            v29 = v54,
            v54 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0x524u, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(a2 + 135) )
        {
          *(_QWORD *)&v63 = 2LL;
          *((_QWORD *)&v63 + 1) = "\n";
          v59 = v63;
          v49 = CShaderLinkingGraphBuilder::AppendNode(
                  (__int64)&ppLinker,
                  10,
                  (__int64)word_180336D88,
                  (__int64)v31,
                  (__int64)"AlphaMultiply",
                  &v59);
          v29 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x532u, 0LL);
            goto LABEL_35;
          }
        }
        if ( !(_BYTE)v70 && *(_DWORD *)(a2 + 128) != -1 )
        {
          v53 = AppendLights(10LL, &ppLinker, a2 + 128, 0xFFFFFFFFLL);
          v29 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x539u, 0LL);
            goto LABEL_35;
          }
        }
        if ( *(_BYTE *)(a2 + 137) && *(_BYTE *)(a2 + 136) )
        {
          *((_QWORD *)&v62 + 1) = "\n";
          *(_QWORD *)&v62 = 1LL;
          v59 = v62;
          v50 = CShaderLinkingGraphBuilder::AppendNode(
                  (__int64)&ppLinker,
                  10,
                  (__int64)word_180336D88,
                  (__int64)v31,
                  (__int64)"RGB_FULL_G22_NONE_P709_To_scRGB",
                  &v59);
          v29 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x54Cu, 0LL);
            goto LABEL_35;
          }
          *(_QWORD *)&v61 = 1LL;
          *((_QWORD *)&v61 + 1) = "\n";
          v59 = v61;
          v51 = CShaderLinkingGraphBuilder::AppendNode(
                  (__int64)&ppLinker,
                  10,
                  (__int64)word_180336D88,
                  (__int64)v31,
                  (__int64)"BoostSDRLuminance",
                  &v59);
          v29 = v51;
          if ( v51 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x550u, 0LL);
            goto LABEL_35;
          }
        }
        if ( !*(_BYTE *)(a2 + 132) )
          goto LABEL_32;
        v55 = *(_BYTE *)(a2 + 137) == 0;
        *(_QWORD *)&v67.Size = &v70;
        v67.Ptr = 1LL;
        v56 = (struct _EVENT_DATA_DESCRIPTOR *)v73;
        if ( !v55 )
          v56 = &v72;
        strcpy((char *)v73, "MinBlend");
        strcpy((char *)&v72, "MinBlend_HDR");
        LOWORD(v70) = 10;
        v57 = CShaderLinkingGraphBuilder::AppendNode(
                (__int64)&ppLinker,
                10,
                (__int64)word_180336D88,
                (__int64)v31,
                (__int64)v56,
                (__int128 *)&v67);
        v29 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x55Au, 0LL);
        }
        else
        {
LABEL_32:
          v40 = CShaderLinkingGraphBuilder::Link(
                  (CShaderLinkingGraphBuilder *)&ppLinker,
                  v39,
                  (struct ID3D10Blob **)v68.Ptr);
          v29 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x55Du, 0LL);
        }
      }
    }
  }
LABEL_35:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v41,
      1u,
      &v68);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::~_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>(v66);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppLinker);
  return v29;
}
