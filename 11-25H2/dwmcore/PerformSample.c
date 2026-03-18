/*
 * XREFs of PerformSample @ 0x1801D20D0
 * Callers:
 *     AppendShaderBody @ 0x1801D26B0 (AppendShaderBody.c)
 *     PrepareSamplers @ 0x1801D4A1C (PrepareSamplers.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     AppendColorModifications @ 0x1801D1FD0 (AppendColorModifications.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801D2468 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ApplyTexcoordTransformations @ 0x1801D25A8 (ApplyTexcoordTransformations.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     GetExtendModeDecoration @ 0x180230460 (GetExtendModeDecoration.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PerformSample(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        void *a6)
{
  int v6; // r14d
  unsigned __int16 v8; // r12
  _BYTE *v9; // rdi
  int v10; // r15d
  unsigned __int16 v11; // r15
  int appended; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 v16; // si
  __int64 v17; // rdx
  int v18; // r9d
  char ExtendModeDecoration; // al
  __int64 v21; // rcx
  char v22; // r8
  char v23; // al
  __int64 v24; // xmm0_8
  unsigned int v25; // [rsp+20h] [rbp-79h]
  __int16 v26; // [rsp+30h] [rbp-69h]
  __int128 v27; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v28[24]; // [rsp+50h] [rbp-49h] BYREF
  char v29; // [rsp+68h] [rbp-31h]
  unsigned __int8 v30; // [rsp+69h] [rbp-30h]
  char v31; // [rsp+6Ah] [rbp-2Fh]
  _WORD v32[8]; // [rsp+70h] [rbp-29h] BYREF
  int v33[4]; // [rsp+80h] [rbp-19h] BYREF

  v6 = a1;
  v8 = a3 | 0x300;
  *(_QWORD *)v33 = a2;
  v9 = (_BYTE *)(a2 + 32LL * a3);
  v26 = a3 | 0x400;
  if ( v9[23] )
  {
    appended = CShaderLinkingGraphBuilder::CopyNode(a1, a5, v8);
    v13 = appended;
    if ( appended >= 0 )
      return v13;
    v25 = 640;
    goto LABEL_15;
  }
  v10 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = v10 + 1;
  v11 = v10 | 0x600;
  appended = CShaderLinkingGraphBuilder::CopyNode(a1, v11, a4);
  v13 = appended;
  if ( appended < 0 )
  {
    v25 = 650;
    goto LABEL_15;
  }
  v14 = ApplyTexcoordTransformations(v6, v33[0], a3, v11, a6);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x291u, 0LL);
    return v13;
  }
  v16 = a3 + 48;
  v32[0] = v11;
  v32[1] = v8;
  v32[2] = v26;
  if ( !v9[21] )
  {
    if ( !v9[20] )
    {
      v17 = 1LL;
      qmemcpy(v28, "SampleTexture", 13);
      *(_WORD *)&v28[13] = v16;
      goto LABEL_7;
    }
    if ( v9[17] == 2 )
    {
      if ( v9[16] == 2 )
      {
        qmemcpy(v28, "SampleWrappedTexture", 20);
        *(_WORD *)&v28[20] = v16;
LABEL_21:
        v17 = 3LL;
        goto LABEL_7;
      }
      v23 = aSamplewrappedt[24];
      *(_OWORD *)v28 = *(_OWORD *)"SampleWrappedTextureVOnly";
      v24 = *(_QWORD *)"tureVOnly";
    }
    else
    {
      v23 = aSamplewrappedt_0[24];
      *(_OWORD *)v28 = *(_OWORD *)"SampleWrappedTextureUOnly";
      v24 = *(_QWORD *)"tureUOnly";
    }
    *(_QWORD *)&v28[16] = v24;
    v29 = v23;
    v30 = v16;
    v31 = 0;
    goto LABEL_21;
  }
  v17 = 1LL;
  *(_WORD *)&v28[18] = v16;
  qmemcpy(v28, "MultiSampleTexture", 18);
  if ( v9[18] )
  {
    LOBYTE(v15) = v9[16];
    if ( (_BYTE)v15 )
    {
      ExtendModeDecoration = GetExtendModeDecoration(v15);
      LOBYTE(v21) = v9[17];
      v28[19] = ExtendModeDecoration;
      v28[20] = GetExtendModeDecoration(v21);
      v17 = 2LL;
      v28[21] = v22;
    }
  }
LABEL_7:
  gsl::details::extent_type<-1>::extent_type<-1>(v33, v17);
  *(_QWORD *)&v33[2] = v32;
  if ( *(_QWORD *)v33 == -1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v27 = *(_OWORD *)v33;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               v6,
               a5,
               (unsigned int)word_180336D88,
               (_DWORD)a6,
               (__int64)v28,
               (__int64)&v27);
  v13 = appended;
  if ( appended < 0 )
  {
    v25 = 707;
    goto LABEL_15;
  }
  v13 = AppendColorModifications(v6, (__int64)v9, a5, (int)a6);
  if ( (v13 & 0x80000000) != 0 )
  {
    v18 = v13;
    v25 = 708;
    goto LABEL_16;
  }
  if ( v9[18] )
  {
    if ( !v9[16] )
    {
      *(_QWORD *)&v27 = 3LL;
      *((_QWORD *)&v27 + 1) = v33;
      LOWORD(v33[0]) = a5;
      HIWORD(v33[0]) = v11;
      LOWORD(v33[1]) = v8;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   v6,
                   a5,
                   (unsigned int)word_180336D88,
                   (_DWORD)a6,
                   (__int64)"ClampTransparent",
                   (__int64)&v27);
      v13 = appended;
      if ( appended < 0 )
      {
        v25 = 718;
LABEL_15:
        v18 = appended;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v25, 0LL);
      }
    }
  }
  return v13;
}
