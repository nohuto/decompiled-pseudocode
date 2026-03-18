/*
 * XREFs of InitializeShaderLinkingInput @ 0x1801D3F58
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801D3728 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801D2BC0 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     GetHlslNameAndSemantic @ 0x1801D4118 (GetHlslNameAndSemantic.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x1801D4C44 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, char a2, VertexShaderDesc *a3)
{
  unsigned int v5; // r9d
  __int128 v6; // kr00_16
  unsigned int i; // edi
  unsigned __int64 v8; // rdx
  __int16 v9; // cx
  char *v10; // rbx
  __int64 v11; // r10
  char *v12; // rdx
  int v13; // r10d
  int v14; // eax
  unsigned int v15; // edi
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF

  v17 = *((_OWORD *)&unk_180308330 + VertexShaderDesc::ResolveKey(a3));
  v6 = v17;
  for ( i = v17; i; i = v8 )
  {
    v8 = i - 1;
    if ( v8 >= (unsigned __int64)v17 )
      goto LABEL_17;
    v9 = *(_WORD *)(*((_QWORD *)&v17 + 1) + 12 * v8);
    if ( (v9 & 0xFF00) != 0x100 || (unsigned __int8)v9 < v5 )
      break;
  }
  v10 = (char *)MIDL_user_allocate(saturated_mul(i, 0x20uLL));
  if ( v10 )
  {
    v11 = 0LL;
    if ( i )
    {
      while ( (unsigned int)v11 < (unsigned __int64)v6 )
      {
        v12 = &v10[32 * (unsigned int)v11];
        *(_WORD *)v12 = *(_WORD *)(*((_QWORD *)&v6 + 1) + 12 * v11);
        *((_QWORD *)v12 + 3) = *(_QWORD *)(*((_QWORD *)&v6 + 1) + 12 * v11 + 4);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(*((_QWORD *)&v6 + 1) + 12 * v11), v12 + 8, v12 + 16);
        v11 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v11 >= i )
          goto LABEL_11;
      }
LABEL_17:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
LABEL_11:
    gsl::details::extent_type<-1>::extent_type<-1>(&v17, i);
    if ( (_QWORD)v17 == -1LL )
      goto LABEL_17;
    *((_QWORD *)&v17 + 1) = v10;
    v14 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a2, (unsigned __int64 *)&v17);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1A0u, 0LL);
    operator delete(v10);
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x193u, 0LL);
  }
  return v15;
}
