/*
 * XREFs of AppendLights @ 0x18022AA74
 * Callers:
 *     AppendShaderBody @ 0x1801BFDD8 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1801BEBD4 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1801C231C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     LinkLightShader @ 0x18022C5C8 (LinkLightShader.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppendLights(__int16 a1, CShaderLinkingGraphBuilder *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int16 v16; // si
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int NodeFromOutputArgument; // eax
  bool v21; // zf
  int v22; // eax
  __int16 v23; // r14
  int v24; // r14d
  int appended; // eax
  int v26; // eax
  _WORD v28[8]; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11ModuleInstance *v29[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v30; // [rsp+50h] [rbp-10h] BYREF
  __int16 v31; // [rsp+90h] [rbp+30h] BYREF

  v31 = a1;
  v4 = qword_1803FB158;
  if ( !qword_1803FB158 )
  {
    v8 = D3DLoadModule(&unk_1803843D0, 0xEE3DuLL, &qword_1803FB158);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3DFu, 0LL);
      return v9;
    }
    v4 = qword_1803FB158;
  }
  v29[0] = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
  v11 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, struct ID3D11ModuleInstance **))CreateInstance)(
          qword_1803FB158,
          word_18032AF78,
          v29);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3E5u, 0LL);
    goto LABEL_29;
  }
  v12 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v29[0]->lpVtbl->BindConstantBuffer)(
          v29[0],
          1LL,
          1LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x3EBu, 0LL);
    goto LABEL_29;
  }
  v13 = CShaderLinkingGraphBuilder::UseLibrary(a2, v29[0]);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x3EDu, 0LL);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    return v9;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
  v14 = *((_DWORD *)a2 + 20);
  v15 = v14 + 1;
  v16 = v14 | 0x600;
  *((_DWORD *)a2 + 20) = v15;
  if ( a4 >= 0 )
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument((__int64)a2, v16, v31, a4);
    v9 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NodeFromOutputArgument, 0x411u, 0LL);
      return v9;
    }
    v21 = *a3 == -1;
    v28[0] = 0;
    if ( v21 )
    {
      v24 = *((_DWORD *)a2 + 20);
      v30 = 0uLL;
      *((_DWORD *)a2 + 20) = v24 + 1;
      v23 = v24 | 0x600;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (__int64)a2,
                   v23,
                   (__int64)word_18032AF78,
                   (__int64)qword_1803FB158,
                   (__int64)"NoLightAccumulator",
                   &v30);
      v9 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x426u, 0LL);
        return v9;
      }
    }
    else
    {
      LOWORD(v29[0]) = v31;
      *((_QWORD *)&v30 + 1) = v29;
      *(_QWORD *)&v30 = 2LL;
      WORD1(v29[0]) = v16;
      v22 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)qword_1803FB158, (unsigned int)&v30, 1, (__int64)v28);
      v9 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x420u, 0LL);
        return v9;
      }
      v23 = v28[0];
    }
    *((_QWORD *)&v30 + 1) = v29;
    *(_QWORD *)&v30 = 2LL;
    LOWORD(v29[0]) = v23;
    WORD1(v29[0]) = v16;
    v26 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v31,
            (__int64)word_18032AF78,
            (__int64)qword_1803FB158,
            (__int64)"PostSceneLightingEffectLib",
            &v30);
    v9 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x42Du, 0LL);
  }
  else
  {
    v29[1] = (struct ID3D11ModuleInstance *)&v31;
    v29[0] = (struct ID3D11ModuleInstance *)1;
    v30 = *(_OWORD *)v29;
    v17 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v16,
            (__int64)word_18032AF78,
            (__int64)qword_1803FB158,
            (__int64)"UnPremultiplyForLighting",
            &v30);
    v9 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x3F7u, 0LL);
    }
    else
    {
      *((_QWORD *)&v30 + 1) = v29;
      *(_QWORD *)&v30 = 1LL;
      v28[0] = 0;
      LOWORD(v29[0]) = v16;
      v18 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)qword_1803FB158, (unsigned int)&v30, 0, (__int64)v28);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x404u, 0LL);
      }
      else
      {
        LOWORD(v29[0]) = v28[0];
        *((_QWORD *)&v30 + 1) = v29;
        *(_QWORD *)&v30 = 2LL;
        WORD1(v29[0]) = v31;
        v19 = CShaderLinkingGraphBuilder::AppendNode(
                (__int64)a2,
                v31,
                (__int64)word_18032AF78,
                (__int64)qword_1803FB158,
                (__int64)"PostLightingLib",
                &v30);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x40Bu, 0LL);
      }
    }
  }
  return v9;
}
