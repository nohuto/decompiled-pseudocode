/*
 * XREFs of ApplyTexcoordTransformations @ 0x1801D25A8
 * Callers:
 *     PerformSample @ 0x1801D20D0 (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ApplyTexcoordExtendMode @ 0x1801D1DEC (ApplyTexcoordExtendMode.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
{
  _BYTE *v7; // rdi
  __int16 v8; // si
  char v9; // r9
  char v10; // cl
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // r15
  int v15; // eax
  int v16; // eax
  int appended; // eax
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v19; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int16 v20; // [rsp+82h] [rbp+1Ah] BYREF

  v7 = (_BYTE *)(a2 + 32LL * a3);
  v8 = a3;
  if ( v7[21] )
    return 0LL;
  v9 = v7[16];
  v10 = v7[20];
  if ( v9 == v7[17] )
  {
    v11 = ApplyTexcoordExtendMode(a1, a4, a3, v9, v10, (__int64)a5, 0LL);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x227u, 0LL);
  }
  else
  {
    v14 = (__int64)a5;
    v15 = ApplyTexcoordExtendMode(a1, a4, a3, v9, v10, (__int64)a5, &v19);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x22Du, 0LL);
    }
    else
    {
      v16 = ApplyTexcoordExtendMode(a1, a4, v8, v7[17], v7[20], v14, &v20);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x22Eu, 0LL);
      }
      else
      {
        v18[0] = 2LL;
        v18[1] = &v19;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     a4,
                     (unsigned int)word_180336D88,
                     v14,
                     (__int64)"BorderEffectCombine",
                     (__int64)v18);
        v12 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x230u, 0LL);
      }
    }
  }
  return v12;
}
