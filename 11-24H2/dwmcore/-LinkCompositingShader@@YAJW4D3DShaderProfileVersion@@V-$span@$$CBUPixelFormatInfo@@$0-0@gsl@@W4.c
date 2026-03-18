/*
 * XREFs of ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650
 * Callers:
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802DC1F4 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18010BF00 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801AAFE0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     AppendColorConversion @ 0x1801BF5EC (AppendColorConversion.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801BFB90 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1801BFF74 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801C02E8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1801C19A4 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1801C1E20 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1801C231C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1801C2424 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinkCompositingShader(
        char a1,
        unsigned __int64 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct ID3D10Blob **a4)
{
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r13
  int v7; // eax
  unsigned int v8; // ebx
  int FragmentsModuleNoRef; // eax
  struct ID3D11Module *v10; // r14
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v15; // rdx
  unsigned int i; // edi
  __int16 v17; // si
  int v18; // eax
  int v19; // eax
  int appended; // eax
  unsigned __int64 v21; // r13
  int ColorChannelDepth; // eax
  char v23; // bl
  int v24; // r8d
  int v25; // eax
  enum DXGI_COLOR_SPACE_TYPE v26; // r15d
  int ConversionShader; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  bool v35[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v36; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v37; // [rsp+38h] [rbp-C8h]
  struct ID3D11ModuleInstance *v38; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Module *v39; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 *v42; // [rsp+70h] [rbp-90h]
  struct ID3D10Blob **v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  __int128 v45; // [rsp+90h] [rbp-70h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v47[13]; // [rsp+100h] [rbp+0h] BYREF
  char v48; // [rsp+10Dh] [rbp+Dh]
  char v49; // [rsp+10Eh] [rbp+Eh]

  v43 = a4;
  v37 = a3;
  v39 = 0LL;
  v38 = 0LL;
  v5 = a2;
  v42 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v6 = *v5;
  gsl::details::extent_type<-1>::extent_type<-1>(&v40, *v5 + 1);
  *((_QWORD *)&v40 + 1) = &unk_18030D960;
  if ( (_QWORD)v40 == -1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v41 = v40;
  v7 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1, (unsigned __int64 *)&v41);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x57Au, 0LL);
  }
  else
  {
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v39);
    v8 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, 0x57Du, 0LL);
    }
    else
    {
      v10 = v39;
      CreateInstance = v39->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      v12 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, struct ID3D11ModuleInstance **))CreateInstance)(
              v10,
              word_18032AF78,
              &v38);
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x57Eu, 0LL);
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v38->lpVtbl->BindConstantBuffer)(
                v38,
                2LL,
                2LL);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x584u, 0LL);
        }
        else
        {
          v14 = CShaderLinkingGraphBuilder::UseLibrary((CShaderLinkingGraphBuilder *)ppLinker, v38);
          v8 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x586u, 0LL);
          }
          else
          {
            for ( i = 0; i < *(_DWORD *)v5; ++i )
            {
              v17 = i | 0x100;
              v18 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v38->lpVtbl->BindResource)(
                      v38,
                      i,
                      i,
                      1LL);
              v8 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x58Du, 0LL);
                goto LABEL_45;
              }
              v19 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v38->lpVtbl->BindSampler)(
                      v38,
                      i,
                      i,
                      1LL);
              v8 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x58Eu, 0LL);
                goto LABEL_45;
              }
              v48 = i + 48;
              *((_QWORD *)&v45 + 1) = &v36;
              qmemcpy(v47, "SampleTexture", sizeof(v47));
              *(_QWORD *)&v45 = 1LL;
              v36 = i | 0x100;
              v49 = 0;
              v44 = v45;
              appended = CShaderLinkingGraphBuilder::AppendNode(
                           (__int64)ppLinker,
                           v17,
                           (__int64)word_18032AF78,
                           (__int64)v10,
                           (__int64)v47,
                           &v44);
              v8 = appended;
              if ( appended < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x594u, 0LL);
                goto LABEL_45;
              }
              if ( (int)i >= v6 )
              {
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v21 = v5[1];
              DWORD2(v40) = 0;
              *(_QWORD *)&v40 = "NoOp";
              v35[0] = 0;
              ColorChannelDepth = GetColorChannelDepth((enum DXGI_FORMAT)*(_DWORD *)(v21 + 12LL * (int)i));
              v23 = *(_DWORD *)(v21 + 12LL * (int)i + 4) == 3;
              if ( (int)ColorConversion::GetConversionShader(
                          (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v21 + 12LL * (int)i + 8),
                          v23,
                          ColorChannelDepth,
                          v37,
                          (struct ColorConversion::Shader *)&v40,
                          v35) < 0 )
              {
                v26 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                if ( v37 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                  v26 = v37;
                ConversionShader = ColorConversion::GetConversionShader(
                                     (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v21 + 12LL * (int)i + 8),
                                     v23,
                                     v24,
                                     v26,
                                     (struct ColorConversion::Shader *)&v40,
                                     v35);
                v8 = ConversionShader;
                if ( ConversionShader < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ConversionShader, 0x5AAu, 0LL);
                  goto LABEL_45;
                }
                v28 = AppendColorConversion((int)ppLinker, (int)v10, v17, (__int64)&v40, v35[0]);
                v8 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x5ABu, 0LL);
                  goto LABEL_45;
                }
                v29 = ColorConversion::GetConversionShader(
                        v26,
                        *(_DWORD *)(v21 + 12LL * (int)i + 4) == 3,
                        v26 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                        v37,
                        (struct ColorConversion::Shader *)&v40,
                        v35);
                v8 = v29;
                if ( v29 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x5B1u, 0LL);
                  goto LABEL_45;
                }
                v30 = AppendColorConversion((int)ppLinker, (int)v10, v17, (__int64)&v40, v35[0]);
                v8 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x5B2u, 0LL);
                  goto LABEL_45;
                }
                v5 = v42;
              }
              else
              {
                v25 = AppendColorConversion((int)ppLinker, (int)v10, v17, (__int64)&v40, v35[0]);
                v8 = v25;
                if ( v25 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x5A0u, 0LL);
                  goto LABEL_45;
                }
              }
              if ( i )
              {
                *(_QWORD *)&v41 = 2LL;
                LOWORD(v39) = 10;
                *((_QWORD *)&v41 + 1) = &v39;
                WORD1(v39) = i | 0x100;
                v44 = v41;
                v32 = CShaderLinkingGraphBuilder::AppendNode(
                        (__int64)ppLinker,
                        10,
                        (__int64)word_18032AF78,
                        (__int64)v10,
                        (__int64)"CompositeSourceOver",
                        &v44);
                v8 = v32;
                if ( v32 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x5BEu, 0LL);
                  goto LABEL_45;
                }
              }
              else
              {
                v31 = CShaderLinkingGraphBuilder::CopyNode((__int64)ppLinker, 10, v17);
                v8 = v31;
                if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x5B8u, 0LL);
                  goto LABEL_45;
                }
              }
              v6 = *v5;
            }
            v33 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v15, v43);
            v8 = v33;
            if ( v33 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x5C2u, 0LL);
          }
        }
      }
    }
  }
LABEL_45:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
  return v8;
}
