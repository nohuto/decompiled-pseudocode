/*
 * XREFs of LinkLightShader @ 0x180238290
 * Callers:
 *     AppendLights @ 0x180236874 (AppendLights.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_K@Z @ 0x1802096D4 (--A-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_K@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 *a4, char a5, __int16 *a6)
{
  int v9; // r9d
  unsigned int v10; // ebx
  int v11; // edx
  int appended; // eax
  unsigned int i; // edi
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int128 v17; // xmm0
  unsigned __int64 v18; // rbx
  __int16 v19; // dx
  unsigned int v21; // [rsp+20h] [rbp-69h]
  __int128 v22; // [rsp+30h] [rbp-59h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-49h]
  __int64 v24; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v25[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v26; // [rsp+80h] [rbp-9h] BYREF

  v23 = a2;
  if ( a6 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    v26 = 0uLL;
    v22 = 0uLL;
    *(_DWORD *)(a1 + 80) = v11 + 1;
    LOWORD(v11) = v11 | 0x600;
    *a6 = v11;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v11,
                 (__int64)word_180336D88,
                 a3,
                 (__int64)"InitLightAccumulator",
                 &v22);
    v10 = appended;
    if ( appended < 0 )
    {
      v21 = 893;
LABEL_37:
      v9 = appended;
      goto LABEL_38;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        return v10;
      v14 = (*v23 >> (4 * i)) & 0xF;
      if ( v14 != 15 )
        break;
LABEL_32:
      ;
    }
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            v21 = 950;
            goto LABEL_3;
          }
          if ( a5 )
          {
            qmemcpy(v25, "SpotSceneLightingEffectLib", 26);
            WORD5(v25[1]) = (unsigned __int8)(i + 48);
          }
          else
          {
            HIBYTE(v25[0]) = i + 48;
            qmemcpy(v25, "SpotLightingLib", 15);
            LOBYTE(v25[1]) = 0;
          }
        }
        else if ( a5 )
        {
          qmemcpy(v25, "PointSceneLightingEffectLib", 27);
          *(_WORD *)((char *)&v25[1] + 11) = (unsigned __int8)(i + 48);
        }
        else
        {
          LOWORD(v25[1]) = (unsigned __int8)(i + 48);
          v25[0] = *(_OWORD *)"PointLightingLib";
        }
LABEL_25:
        LODWORD(v26) = 196610;
        if ( i )
          LODWORD(v26) = 327684;
        v18 = 0LL;
        WORD2(v26) = *a6;
        *(_DWORD *)((char *)&v26 + 6) = 0;
        WORD5(v26) = 0;
        do
        {
          if ( v18 >= *a4 )
            break;
          *((_WORD *)&v26 + v18 + 3) = *(_WORD *)gsl::span<enum ShaderLinkingArgument const,-1>::operator[](a4, v18);
          ++v18;
        }
        while ( v18 + 3 < 6 );
        gsl::details::extent_type<-1>::extent_type<-1>(&v24, *a4 + 3);
        if ( v24 == -1 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v19 = *a6;
        *(_QWORD *)&v22 = v24;
        *((_QWORD *)&v22 + 1) = &v26;
        appended = CShaderLinkingGraphBuilder::AppendNode(a1, v19, (__int64)word_180336D88, a3, (__int64)v25, &v22);
        v10 = appended;
        if ( appended < 0 )
        {
          v21 = 970;
          goto LABEL_37;
        }
        goto LABEL_32;
      }
      if ( a5 )
      {
        qmemcpy(v25, "DistantSceneLightingEffectLib", 29);
        *(_WORD *)((char *)&v25[1] + 13) = (unsigned __int8)(i + 48);
        goto LABEL_25;
      }
      v17 = *(_OWORD *)"DistantLightingLib";
      LOWORD(v25[1]) = *(_WORD *)"ib";
      WORD1(v25[1]) = (unsigned __int8)(i + 48);
    }
    else
    {
      if ( a5 )
      {
        strcpy((char *)v25, "AmbientSceneLightingEffectLib0");
        goto LABEL_25;
      }
      v17 = *(_OWORD *)"AmbientLightingLib";
      strcpy((char *)&v25[1], "ib0");
    }
    v25[0] = v17;
    goto LABEL_25;
  }
  v21 = 888;
LABEL_3:
  v9 = -2147024809;
  v10 = -2147024809;
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v21, 0LL);
  return v10;
}
