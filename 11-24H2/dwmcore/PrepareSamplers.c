/*
 * XREFs of PrepareSamplers @ 0x1801C2118
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801647B8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     PopulateSamplerArguments @ 0x1801BF18C (PopulateSamplerArguments.c)
 *     PerformSample @ 0x1801BF7F8 (PerformSample.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1801C1E20 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrepareSamplers(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ebx
  struct ID3D11Module *v9; // r15
  __int64 i; // rdi
  _BYTE *v11; // r9
  int v12; // eax
  int v13; // eax
  struct ID3D11Module *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(*(_BYTE *)(a1 + 84), &v14);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef >= 0 )
  {
    v9 = v14;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)a3; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = (_BYTE *)(a3[1] + 8 * i);
      if ( *v11 || v11[2] )
      {
        v12 = PopulateSamplerArguments(a1, a2, i, v11, (__int64)v9);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x316u, 0LL);
          return v7;
        }
        if ( *(_BYTE *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a3, (unsigned int)i) + 1) )
        {
          v13 = PerformSample(a1, a2, i, (unsigned __int16)i | 0x100u, (unsigned __int16)i | 0x200u, v9);
          v7 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x320u, 0LL);
            return v7;
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, 0x30Fu, 0LL);
  }
  return v7;
}
