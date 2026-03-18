/*
 * XREFs of AppendColorModifications @ 0x1801D1FD0
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801D1904 (AppendCustomSamplerShaderBody.c)
 *     PerformSample @ 0x1801D20D0 (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     AppendColorConversion @ 0x1801D1F1C (AppendColorConversion.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorModifications(int a1, __int64 a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v5; // ax
  int v8; // eax
  unsigned int v9; // ebx
  int appended; // eax
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v14; // [rsp+38h] [rbp-10h]
  unsigned __int16 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v5 = a3;
  if ( *(_BYTE *)(a2 + 24) )
  {
    v13 = 1LL;
    v14 = &v15;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 a3,
                 (unsigned int)word_180336D88,
                 a4,
                 (__int64)"IgnoreAlpha",
                 (__int64)&v13);
    v9 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x25Au, 0LL);
      return v9;
    }
    v5 = v15;
  }
  if ( *(_BYTE *)(a2 + 25) )
  {
    v13 = 1LL;
    v14 = &v15;
    v12 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v5,
            (unsigned int)word_180336D88,
            a4,
            (__int64)"UnBoostSDRLuminance",
            (__int64)&v13);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x260u, 0LL);
      return v9;
    }
    v5 = v15;
  }
  v8 = AppendColorConversion(a1, a4, v5, a2, 0);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x263u, 0LL);
  return v9;
}
