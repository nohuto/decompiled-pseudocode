/*
 * XREFs of AppendColorConversion @ 0x1801BF5EC
 * Callers:
 *     AppendColorModifications @ 0x1801BF6A0 (AppendColorModifications.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorConversion(int a1, int a2, unsigned __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // r10
  int appended; // eax
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v13; // [rsp+38h] [rbp-10h]
  unsigned __int16 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v5 = 0;
  v6 = a3;
  if ( *(_DWORD *)(a4 + 8) > 1u )
  {
    v12 = 1LL;
    v13 = &v14;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 a3,
                 (unsigned int)word_18032AF78,
                 a2,
                 *(_QWORD *)a4,
                 (__int64)&v12);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x243u, 0LL);
      return v5;
    }
    v6 = v14;
  }
  if ( a5 )
  {
    v12 = 1LL;
    v13 = &v14;
    v11 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v6,
            (unsigned int)word_18032AF78,
            a2,
            (__int64)"BoostSDRLuminance",
            (__int64)&v12);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x248u, 0LL);
  }
  return v5;
}
