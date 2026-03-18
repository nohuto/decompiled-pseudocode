/*
 * XREFs of DecodeInputTexcoord @ 0x1801D1CB8
 * Callers:
 *     PopulateSamplerArguments @ 0x1801D1ABC (PopulateSamplerArguments.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1801D15B0 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801D3128 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall DecodeInputTexcoord(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  unsigned __int16 v4; // ax
  bool v5; // zf
  int appended; // eax
  unsigned int v7; // ebx
  int v9; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3 | 0x100;
  v5 = *(_BYTE *)(a2 + 134) == 0;
  v11 = a3 | 0x100;
  if ( v5 )
  {
    v9 = CShaderLinkingGraphBuilder::SwizzleNode(a1, v4, 256LL);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x208u, 0LL);
  }
  else
  {
    v10[0] = 1LL;
    v10[1] = &v11;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v4,
                 (unsigned int)word_180336D88,
                 a4,
                 (__int64)"FlattenTexcoords",
                 (__int64)v10);
    v7 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x203u, 0LL);
  }
  return v7;
}
