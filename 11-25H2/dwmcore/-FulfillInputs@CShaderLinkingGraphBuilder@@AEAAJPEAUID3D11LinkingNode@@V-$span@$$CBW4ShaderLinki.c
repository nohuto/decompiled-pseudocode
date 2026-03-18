/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D33C8
 * Callers:
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1801D284C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _WORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  int v20; // eax
  int v22; // eax
  unsigned int v23[2]; // [rsp+20h] [rbp-28h]

  v3 = 0;
  for ( i = 0LL; i < *a3; ++i )
  {
    v8 = 0xCBF29CE484222325uLL;
    v9 = 0LL;
    v10 = (_WORD *)(a3[1] + 2 * i);
    do
    {
      v11 = *((unsigned __int8 *)v10 + v9++);
      v8 = 0x100000001B3LL * (v11 ^ v8);
    }
    while ( v9 < 2 );
    v12 = v8 & a1[8];
    v13 = a1[5];
    v14 = 2 * v12;
    v15 = *(_QWORD *)(v13 + 8 * v14 + 8);
    if ( v15 == a1[3] )
    {
LABEL_16:
      v15 = 0LL;
    }
    else
    {
      while ( *v10 != *(_WORD *)(v15 + 16) )
      {
        if ( v15 == *(_QWORD *)(v13 + 8 * v14) )
          goto LABEL_16;
        v15 = *(_QWORD *)(v15 + 8);
      }
    }
    if ( !v15 || v15 == a1[3] )
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x15Au, 0LL);
      return v3;
    }
    v16 = (__int64 *)a1[1];
    v17 = *(_QWORD *)(v15 + 24);
    v18 = (unsigned int)*(char *)(v15 + 32);
    v19 = *v16;
    if ( *(_BYTE *)(v15 + 33) )
    {
      v23[1] = HIDWORD(a2);
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v19 + 64))(v16, v17, v18);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x169u, 0LL);
        return v3;
      }
    }
    else
    {
      v23[0] = i;
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v19 + 56))(
              v16,
              v17,
              v18,
              a2,
              *(unsigned int **)v23);
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x162u, 0LL);
        return v3;
      }
    }
  }
  return v3;
}
