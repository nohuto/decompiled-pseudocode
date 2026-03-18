/*
 * XREFs of PopulateSamplerArguments @ 0x1801BF18C
 * Callers:
 *     PrepareSamplers @ 0x1801C2118 (PrepareSamplers.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DecodeInputTexcoord @ 0x1801BF388 (DecodeInputTexcoord.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall PopulateSamplerArguments(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  int v8; // edx
  unsigned __int16 v9; // cx
  _BYTE *v10; // rdi
  unsigned int v12; // ebx
  char v13; // al
  int appended; // eax
  int v15; // eax
  char v17; // al
  int v18; // eax
  unsigned __int16 v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v21[17]; // [rsp+50h] [rbp-20h] BYREF
  char v22; // [rsp+61h] [rbp-Fh]
  char v23; // [rsp+62h] [rbp-Eh]

  v8 = (unsigned __int16)a3;
  v9 = a3 | 0x400;
  v10 = (_BYTE *)(a2 + 32LL * a3);
  v12 = 0;
  v19 = a3 | 0x400;
  if ( !a4[2] )
    goto LABEL_19;
  if ( v10[23] || v10[18] )
  {
    v13 = a4[4];
    v20 = 0uLL;
    *(_WORD *)&v21[14] = (unsigned __int8)(v13 + 48);
    qmemcpy(v21, "GetSamplerData", 14);
    LOWORD(v8) = a3 | 0x300;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v8,
                 (unsigned int)word_18032AF78,
                 a5,
                 (__int64)v21,
                 (__int64)&v20);
    v12 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x2EEu, 0LL);
      return v12;
    }
    v9 = v19;
  }
  if ( (v10[20] || v10[19])
    && (v17 = a4[4],
        v20 = 0uLL,
        v22 = v17 + 48,
        qmemcpy(v21, "GetSamplerDataExt", sizeof(v21)),
        v23 = 0,
        v18 = CShaderLinkingGraphBuilder::AppendNode(
                a1,
                v9,
                (unsigned int)word_18032AF78,
                a5,
                (__int64)v21,
                (__int64)&v20),
        v12 = v18,
        v18 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x2F4u, 0LL);
  }
  else
  {
LABEL_19:
    if ( *a4 )
    {
      if ( !v10[23] )
      {
        v15 = DecodeInputTexcoord(a1, a2, a3, a5);
        v12 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x2FDu, 0LL);
      }
    }
  }
  return v12;
}
