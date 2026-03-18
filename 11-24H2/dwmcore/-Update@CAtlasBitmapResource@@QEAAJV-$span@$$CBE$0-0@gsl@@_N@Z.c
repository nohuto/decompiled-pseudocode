/*
 * XREFs of ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180063390
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180062E18 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180063424 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::Update(__int64 a1, __int128 *a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1 + 24;
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v10 = *a2;
    CAtlasTexture::UpdateGradientStrip(v7, v5, &v10);
    *(_BYTE *)(a1 + 48) = a3;
    *(_BYTE *)(a1 + 49) = 1;
    return 0;
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xC4u, 0LL);
  }
  return v8;
}
