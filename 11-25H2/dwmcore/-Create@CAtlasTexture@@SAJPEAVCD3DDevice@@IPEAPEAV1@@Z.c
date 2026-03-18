/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801A1048
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18019E548 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801A1218 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1801A0D14 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x1802C5B84 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDevice *a1, UINT32 a2, struct CAtlasTexture **a3)
{
  struct CAtlasTexture *v6; // rax
  struct CAtlasTexture *v7; // rbx
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx

  v6 = (struct CAtlasTexture *)MIDL_user_allocate(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 9) = 0;
    *(_QWORD *)v6 = &CAtlasTexture::`vftable';
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = 0;
    v10 = CAtlasTexture::Initialize(v6, a1, a2);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *a3 = v7;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x19u, 0LL);
      std::default_delete<CAtlasTexture>::operator()(v11, v7);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v8;
}
