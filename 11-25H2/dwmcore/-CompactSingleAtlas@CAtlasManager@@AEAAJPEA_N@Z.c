/*
 * XREFs of ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801A1218
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1801A1120 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801A1048 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1801A1330 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801A1490 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801A188C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801A1948 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x18025B814 (--$swap@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV-$unique_ptr@VC.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x1802C5B84 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

__int64 __fastcall CAtlasManager::CompactSingleAtlas(const struct CAtlasTexture ***this, bool *a2)
{
  const struct CAtlasTexture **v2; // rsi
  int v4; // ebx
  bool v5; // di
  UINT32 v6; // eax
  __int64 v7; // r9
  UINT32 v8; // r8d
  CAtlasTexture *v10; // rdx
  const struct CAtlasTexture *v11; // rdx
  __int64 v12; // rcx
  struct CAtlasTexture *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  unsigned int v15; // [rsp+70h] [rbp+20h] BYREF
  CAtlasTexture *v16; // [rsp+78h] [rbp+28h] BYREF

  v2 = *this;
  v4 = 0;
  v5 = 0;
  v6 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)**this + 6) - *((_DWORD *)**this + 7));
  if ( v6 < v8 )
  {
    v16 = 0LL;
    v13 = 0LL;
    v14 = 1;
    v4 = CAtlasTexture::Create((struct CD3DDevice *)(v7 - 512), v6, &v13);
    if ( v14 )
    {
      v10 = v16;
      v16 = v13;
      if ( v10 )
        std::default_delete<CAtlasTexture>::operator()(v13, v10);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x7Bu, 0LL);
      std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v16);
    }
    else
    {
      v11 = *v2;
      v15 = 0;
      CAtlasTexture::CopyFrom(v16, v11, &v15);
      v5 = 1;
      std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(v2, &v16);
      CAtlasTexture::PurgeAndNotify(v16);
      if ( v16 )
        std::default_delete<CAtlasTexture>::operator()(v12, v16);
    }
  }
  *a2 = v5;
  return (unsigned int)v4;
}
