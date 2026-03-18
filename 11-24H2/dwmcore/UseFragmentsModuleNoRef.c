/*
 * XREFs of UseFragmentsModuleNoRef @ 0x1801C1F68
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1801C1E20 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1801C231C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(CShaderLinkingGraphBuilder *this, unsigned int a2, struct ID3D11Module **a3)
{
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ebx
  struct ID3D11Module *v8; // rsi
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v10; // eax
  int v11; // eax
  struct ID3D11ModuleInstance *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-10h]
  struct ID3D11ModuleInstance *v15; // [rsp+60h] [rbp+30h] BYREF
  struct ID3D11Module *v16; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(*((_BYTE *)this + 84), &v16);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v14 = 28;
    goto LABEL_12;
  }
  v8 = v16;
  CreateInstance = v16->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, struct ID3D11ModuleInstance **))CreateInstance)(
                           v8,
                           word_18032AF78,
                           &v15);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v14 = 29;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, v14, 0LL);
    goto LABEL_8;
  }
  v10 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v15->lpVtbl->BindResource)(
          v15,
          0LL,
          0LL,
          4LL);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x20u, 0LL);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v15->lpVtbl->BindSampler)(
            v15,
            0LL,
            0LL,
            4LL);
    v7 = v11;
    if ( v11 >= 0 )
    {
      FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v15->lpVtbl->BindConstantBuffer)(
                               v15,
                               0LL,
                               0LL,
                               a2);
      v7 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 42;
      }
      else
      {
        FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v15->lpVtbl->BindConstantBuffer)(
                                 v15,
                                 2LL,
                                 2LL);
        v7 = FragmentsModuleNoRef;
        if ( FragmentsModuleNoRef >= 0 )
        {
          CShaderLinkingGraphBuilder::UseLibrary(this, v15);
          *a3 = v8;
          goto LABEL_8;
        }
        v14 = 48;
      }
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x21u, 0LL);
  }
LABEL_8:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct ID3D11ModuleInstance *))v12->lpVtbl->Release)(v12);
  }
  return v7;
}
