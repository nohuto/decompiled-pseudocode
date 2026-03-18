/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1801D4724
 * Callers:
 *     LoadShaderBody @ 0x1801D44A4 (LoadShaderBody.c)
 *     UseFragmentsModuleNoRef @ 0x1801D486C (UseFragmentsModuleNoRef.c)
 *     PrepareSamplers @ 0x1801D4A1C (PrepareSamplers.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802947F0 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(char a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = qword_180407258;
    if ( qword_180407258 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1803AA780, 0x1C211uLL, &qword_180407258);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180407258;
      goto LABEL_4;
    }
    v7 = 294;
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    v4 = qword_180407250;
    if ( qword_180407250 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_18035CA20, 0x2DE15uLL, &qword_180407250);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180407250;
      goto LABEL_4;
    }
    v7 = 306;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v7, 0LL);
    return v2;
  }
  if ( a1 != 2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x146u, 0LL);
    return v2;
  }
  v4 = ppModule;
  if ( !ppModule )
  {
    v6 = D3DLoadModule(&unk_18033B7B0, 0x2124DuLL, &ppModule);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = ppModule;
      goto LABEL_4;
    }
    v7 = 318;
    goto LABEL_18;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
