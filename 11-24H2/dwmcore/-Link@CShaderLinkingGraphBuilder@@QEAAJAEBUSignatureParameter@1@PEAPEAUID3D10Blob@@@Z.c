/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1801BFF74
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0AF0 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801C1B2C (-clear@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Link(
        CShaderLinkingGraphBuilder *this,
        const struct CShaderLinkingGraphBuilder::SignatureParameter *a2,
        struct ID3D10Blob **a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v7)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *); // rdi
  const char *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  struct ID3D10Blob *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  const CHAR *v26; // rax
  _QWORD v27[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v28; // [rsp+50h] [rbp-49h]
  _BYTE v29[40]; // [rsp+60h] [rbp-39h]
  _OWORD v30[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+1Fh]
  struct ID3D10Blob *v32; // [rsp+100h] [rbp+67h] BYREF
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v33; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+118h] [rbp+7Fh] BYREF

  v33 = a2;
  v3 = (__int64 *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  *(_QWORD *)&v28 = "output";
  *((_QWORD *)&v28 + 1) = "SV_Target";
  *(_QWORD *)&v29[12] = 4LL;
  *(_OWORD *)&v29[24] = 0LL;
  v34 = 0LL;
  v30[0] = v28;
  v32 = 0LL;
  v33 = 0LL;
  v31 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v29[24], *(__m128d *)&v29[24]);
  *(_QWORD *)v29 = 0x100000003LL;
  *(_DWORD *)&v29[8] = 1;
  *(_DWORD *)&v29[20] = 2;
  v30[1] = *(_OWORD *)v29;
  v30[2] = *(_OWORD *)&v29[16];
  v7 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v4 + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  v8 = v7(v4, v30, 1LL, &v33);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xD4u, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    goto LABEL_15;
  }
  v27[1] = &unk_1802FC4F0;
  v27[0] = 1LL;
  v10 = CShaderLinkingGraphBuilder::FulfillInputs(this, v33, v27);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD5u, 0LL);
  }
  else
  {
    v11 = (__int64)v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *v3;
    v33 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    v14 = v13(v12, &v33, 0LL);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v15 = *(_QWORD *)this;
      v16 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(**(_QWORD **)this + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
      if ( *((_BYTE *)this + 84) )
      {
        if ( *((_BYTE *)this + 84) == 1 )
        {
          v17 = "ps_4_0_level_9_3";
        }
        else if ( *((_BYTE *)this + 84) == 2 )
        {
          v17 = "ps_4_0";
        }
        else
        {
          v17 = 0LL;
        }
      }
      else
      {
        v17 = "ps_4_0_level_9_1";
      }
      v18 = v16(v15, v33, "main", v17, 0, &v32, &v34);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xE6u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
      }
      else
      {
        v19 = (__int64)v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v32;
        if ( v32 )
        {
          ((void (__fastcall *)(struct ID3D10Blob *))v32->lpVtbl->AddRef)(v32);
          v20 = v32;
        }
        *a3 = v20;
      }
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xDBu, 0LL);
  }
  v24 = (__int64)v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_15:
  if ( byte_1803FB178 )
  {
    v25 = *v3;
    v33 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v25 + 80LL))(
           v25,
           0LL,
           &v33) >= 0 )
    {
      v26 = (const CHAR *)(*(__int64 (__fastcall **)(const struct CShaderLinkingGraphBuilder::SignatureParameter *))(*(_QWORD *)v33 + 24LL))(v33);
      OutputDebugStringA(v26);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::clear((char *)this + 16);
  v21 = (__int64)v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v9;
}
