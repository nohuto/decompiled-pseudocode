/*
 * XREFs of ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801CC8B8
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1801CC7C0 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1801CC9D0 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801CCB30 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801CCF2C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801CCFB0 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801CD2A8 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x180250214 (--$swap@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV-$unique_ptr@VC.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x1802BC524 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

__int64 __fastcall CAtlasManager::CompactSingleAtlas(const struct CAtlasTexture ***this, bool *a2)
{
  const struct CAtlasTexture **v2; // rsi
  int v4; // ebx
  bool v5; // di
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r8d
  CAtlasTexture *v10; // rdx
  const struct CAtlasTexture *v11; // rdx
  struct CAtlasTexture *v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  unsigned int v14; // [rsp+70h] [rbp+20h] BYREF
  CAtlasTexture *v15; // [rsp+78h] [rbp+28h] BYREF

  v2 = *this;
  v4 = 0;
  v5 = 0;
  v6 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)**this + 6) - *((_DWORD *)**this + 7));
  if ( v6 < v8 )
  {
    v15 = 0LL;
    v12 = 0LL;
    v13 = 1;
    v4 = CAtlasTexture::Create((struct CD3DDevice *)(v7 - 512), v6, &v12);
    if ( v13 )
    {
      v10 = v15;
      v15 = v12;
      if ( v10 )
        std::default_delete<CAtlasTexture>::operator()();
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x7Bu, 0LL);
      std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v15);
    }
    else
    {
      v11 = *v2;
      v14 = 0;
      CAtlasTexture::CopyFrom(v15, v11, &v14);
      v5 = 1;
      std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(v2, &v15);
      CAtlasTexture::PurgeAndNotify(v15);
      if ( v15 )
        std::default_delete<CAtlasTexture>::operator()();
    }
  }
  *a2 = v5;
  return (unsigned int)v4;
}
