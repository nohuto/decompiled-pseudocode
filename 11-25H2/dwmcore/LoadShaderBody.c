/*
 * XREFs of LoadShaderBody @ 0x1801D44A4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801D3728 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1801D4724 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LoadShaderBody(
        __int64 a1,
        __int64 a2,
        struct ID3D11Module *a3,
        unsigned int a4,
        __int64 a5,
        struct ID3D11Module **a6)
{
  _QWORD *v7; // r14
  int FragmentsModuleNoRef; // eax
  unsigned int v10; // ebx
  HRESULT v11; // eax
  struct ID3D11Module *v12; // rbx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rdi
  int v14; // eax
  int v15; // eax
  struct ID3D11Module *v16; // rcx
  struct ID3D11Module *v17; // rcx
  struct ID3D11Module *v18; // rcx
  struct ID3D11Module *v20; // rdi
  struct ID3D11Module *v21; // rcx
  unsigned int v22; // ebx
  struct ID3D11Module *ppModule; // [rsp+60h] [rbp+30h] BYREF
  struct ID3D11Module *v24; // [rsp+70h] [rbp+40h] BYREF

  v24 = a3;
  v7 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  ppModule = 0LL;
  v24 = 0LL;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v24);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, 0x339u, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 16) )
    {
      v20 = v24;
      if ( ppModule == v24 )
        goto LABEL_11;
      if ( v24 )
        ((void (__fastcall *)(struct ID3D11Module *))v24->lpVtbl->AddRef)(v24);
      v16 = ppModule;
      ppModule = v20;
      if ( !v16 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppModule);
    v11 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x340u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      v12 = ppModule;
      CreateInstance = ppModule->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      v14 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11Module **))CreateInstance)(
              v12,
              a5,
              &v24);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x341u, 0LL);
      }
      else
      {
        ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, _QWORD))v24->lpVtbl->CreateInstance)(
          v24,
          0LL,
          0LL,
          a4);
        ((void (__fastcall *)(struct ID3D11Module *, __int64, __int64, _QWORD))v24->lpVtbl->CreateInstance)(
          v24,
          1LL,
          1LL,
          0LL);
        if ( (*(_WORD *)(a2 + 44) & 0xFF00) == 0x200 )
        {
          v22 = *(unsigned __int8 *)(a2 + 44);
          ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, __int64))v24->lpVtbl[1].AddRef)(
            v24,
            *(unsigned __int8 *)(a2 + 44),
            *(unsigned __int8 *)(a2 + 44),
            1LL);
          ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, __int64))v24->lpVtbl[1].CreateInstance)(
            v24,
            v22,
            v22,
            1LL);
        }
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Module *))(*(_QWORD *)*v7 + 32LL))(*v7, v24);
        v10 = v15;
        if ( v15 >= 0 )
        {
          v16 = v24;
          if ( !v24 )
          {
LABEL_11:
            v17 = ppModule;
            ppModule = 0LL;
            *a6 = v17;
            goto LABEL_12;
          }
          v24 = 0LL;
LABEL_10:
          ((void (__fastcall *)(struct ID3D11Module *))v16->lpVtbl->Release)(v16);
          goto LABEL_11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x35Cu, 0LL);
      }
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        ((void (__fastcall *)(struct ID3D11Module *))v21->lpVtbl->Release)(v21);
      }
    }
  }
LABEL_12:
  v18 = ppModule;
  if ( ppModule )
  {
    ppModule = 0LL;
    ((void (__fastcall *)(struct ID3D11Module *))v18->lpVtbl->Release)(v18);
  }
  return v10;
}
